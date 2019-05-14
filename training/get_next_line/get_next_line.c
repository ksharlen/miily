/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 16:31:21 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/14 14:42:43 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list       *ft_find_fd_to_lst(t_list *beg, int fd)
{
    if (beg)
        while (beg)
        {
            if ((*(int *)beg->content) == fd)
            {
//				printf("test\n");
				return (beg);
			}
            beg = beg->next;
        }
    return (NULL);
}

static int      ft_line_fill(char **line, t_list *elem)
{
    void            *tmp;
    char            *back_n;

	back_n = NULL;
    back_n = ft_strchr(elem->content + 4, '\n');
    (*line) = ft_strsub(elem->content + 4, 0, ft_strnlen(elem->content + 4, '\n'));
    if (!(*line))
        return (-1);
    tmp = elem->content;
    if ((ft_strnlen(elem->content + 4, '\n') + 1) == elem->content_size - 4)
    {
//		printf("123hahahahhahah i am here\n");
        elem->content = ft_memsub(tmp, 0, 4);
		elem->content_size = 4;
        if (!(elem->content))
        {
//            ft_memdel(&tmp); //?тут под вопросом
            return (-1);
        }
    }
    else
    {
        elem->content_size = (elem->content_size) - (ft_strnlen(elem->content + 4, '\n') + 1);
        elem->content = ft_memnjoin(tmp, back_n + 1, 4, elem->content_size - 4);
        if (!(elem->content))
        {
            return (-1);
        }
    }
    ft_memdel(&tmp);//!Крашится именно тут!!!!!!!!!!!!!
    return (1);
}

static int      ft_read_write(t_list *elem)
{
    int         	byte_read;
    char            *buf;
    void            *tmp;

	tmp = NULL;
    buf = ft_memalloc(BUFF_SIZE);
//	printf("32\n");
    if (buf)
    {
        byte_read = read(*(int *)elem->content, buf, BUFF_SIZE);
        if (!byte_read || byte_read == -1)
        {
            ft_strdel(&buf);
            return (byte_read ? -1 : 0);
        }
        tmp = elem->content;
        elem->content = ft_memnjoin(tmp, buf, elem->content_size, byte_read);
        if (!elem->content)
        {
            ft_strdel(&buf);
            return (-1);
        }
        elem->content_size += byte_read;
        ft_memdel(&tmp);
        ft_strdel(&buf);
//		printf("read: fd = %d		content = %s\n", *(int *)elem->content, (char *)elem->content + 4);
//		printf("byte_read = %d\n", byte_read);
        return (byte_read);
    }
    return (-1);
}

static int          ft_build_line(t_list *elem, char **line)
{
    char            *back_n;
    int		        byte_read;
    void            *tmp;

    byte_read = -2;
	back_n = NULL;
    while (1)
    {
        if ((back_n = ft_strchr(elem->content + 4, '\n')))
            return (ft_line_fill(line, elem));
        else if (!byte_read)
        {
            if (elem->content_size > 4)
            {
                (*line) = ft_strsub(elem->content + 4, 0, elem->content_size - 4);
                if (!(*line))
                    return (-1);
                elem->content_size = 4;
                tmp = elem->content;
                elem->content = ft_memsub(tmp, 0, 4);
                if (!elem->content)
                    return (-1);
                ft_memdel(&tmp);
                return (1);
            }
            return (0);
        }
        else
        {
            byte_read = ft_read_write(elem);
            if (byte_read == -1)
                return (-1);
        }
    }
}

void	ft_print(t_list *beg)
{
	while (beg)
	{
		printf("fd = %d\n", *(int *)beg->content);
		beg = beg->next;
	}
}

int                 get_next_line(const int fd, char **line)
{
    static t_list   *beg;
    t_list          *tmp;

    if (fd >= 0 && fd < FD_MAX && BUFF_SIZE > 0 && line)
    {
        if (!(tmp = ft_find_fd_to_lst(beg, fd)))
        {
//			printf("13\n");
            tmp = ft_lstnew(&fd, 4);
            if (!tmp)
                return (-1);
            ft_lstadd_end(&beg, tmp);
        }
//		ft_print(beg);
//		printf("fd = %d		content = %d\n", *(int *)tmp->content, *((char *)tmp->content + 4));
        return (ft_build_line(tmp, line));
    }
    return (-1);
}
