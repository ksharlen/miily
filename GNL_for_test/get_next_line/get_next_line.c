/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 16:31:21 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/13 18:40:49 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list       *ft_find_fd_to_lst(t_list *beg, int fd)
{
    if (beg)
        while (beg)
        {
            if ((*(int *)beg->content) == fd)
                return (beg);
            beg = beg->next;
        }
    return (NULL);
}

static ssize_t      ft_line_fill(char **line, t_list *elem)
{
    void            *tmp;
    char            *back_n;

	back_n = NULL;
    back_n = ft_strchr(elem->content + 4, '\n');
    (*line) = ft_strsub(elem->content + 4, 0, ft_strnlen(elem->content + 4, '\n'));
    if (!(*line))
        return (-1);
    //(*line)[ft_strnlen(elem->content + 4, '\n')] = '\0';
    tmp = elem->content;
//	printf("strnlen = %ld\n", ft_strnlen(elem->content + 4, '\n') + 1 + 4);
    if ((ft_strnlen(elem->content + 4, '\n') + 1) == elem->content_size - 4)
    {
//		printf("fuck\n");
        elem->content = ft_memsub(tmp, 0, 4); //?тут поменял
		elem->content_size = 4;
        if (!(elem->content))
        {
            free(tmp);
            return (-1);
        }
//        free(tmp);
    }
    else
    {
//		printf("before: content_size = %ld\n", elem->content_size);
        elem->content_size = (elem->content_size) - (ft_strnlen(elem->content + 4, '\n') + 1);
//		printf("after: content_size = %ld\n", elem->content_size);
//		printf("begin: elem->content = %s\n", (char *)elem->content + 4);
        elem->content = ft_memnjoin(tmp, back_n + 1, 4, elem->content_size - 4);
//        ft_memdel(&tmp); //? я тут менял
        if (!(elem->content))
        {
//            free(tmp);
//			printf("error\n");
            return (-1);
        }
//        free(tmp);
    }
    ft_memdel(&tmp);
//		printf("end: elem->content = %s\n", (char *)elem->content + 4);

//    free(tmp);
    //tmp = NULL;
    return (1);
}

static ssize_t      ft_read_write(t_list *elem)
{
    ssize_t         byte_read;
    char            *buf;
    void            *tmp;

	tmp = NULL;
//	printf("1\n");
    buf = ft_memalloc(BUFF_SIZE);
    if (buf)
    {
        byte_read = read(*(int *)elem->content, buf, BUFF_SIZE);
//		printf("byte_read = %ld\n", byte_read);
        if (!byte_read || byte_read == -1)
        {
            ft_strdel(&buf);
            return (byte_read ? -1 : 0);
        }
        tmp = elem->content;
//		printf("content_size = %ld\n", elem->content_size);
        elem->content = ft_memnjoin(tmp, buf, elem->content_size, byte_read);
//		ft_memdel(&tmp);
        if (!elem->content)
        {
//			ft_memdel(&tmp);
            ft_strdel(&buf);
            return (-1);
        }
        elem->content_size += byte_read;
//		printf("elem->content_size = %ld\n", elem->content_size);
//		printf("br: elem->content = %s\ncontent_size = %ld\n", (char *)elem->content + 4, elem->content_size);
        ft_memdel(&tmp);
        ft_strdel(&buf);
        return (byte_read);
    }
    return (-1);
}

static int          ft_build_line(t_list *elem, char **line)
{
    char            *back_n;
    ssize_t         byte_read;
    void            *tmp;

    byte_read = -2;
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
                elem->content = ft_memsub(tmp, 0, 4);//?тут поменял
                if (!elem->content)
                    return (-1);
                ft_memdel(&tmp);
                return (1);
                //ft_lstdelone(&elem, ft_lstfreeone);
                //ft_memdel(&elem->content); //?тут под вопросом
                //free(elem->content);

                //return ((*line) ? 1 : -1);
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

int                 get_next_line(const int fd, char **line)
{
    static t_list   *beg;
    t_list          *tmp;

    if (fd >= 0 && fd < FD_MAX && BUFF_SIZE > 0 && line)
    {
        if (!(tmp = ft_find_fd_to_lst(beg, fd)))
        {
            tmp = ft_lstnew(&fd, 4);
            if (!tmp)
                return (-1);
            ft_lstadd_end(&beg, tmp);
        }
        return (ft_build_line(tmp, line));
    }
    return (-1);
}