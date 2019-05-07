#include "libft.h"

static t_list   *ft_find_fd_to_lst(t_list *beg, int fd)
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

static ssize_t     ft_read_write(const int fd, char *buf)
{
    ssize_t byte_read;

    byte_read = read(fd, buf, BUFF_SIZE);
    buf[byte_read] = '\0';
    return (byte_read);
}

static void     ft_build_line(t_list *elem, char **line, char *buf)
{
    char *back_n;

    while (1)
    {
        if (back_n = ft_strchr((elem)->content + 4, '\n'))
        {
            (*line) = ft_strsub(elem->content + 4, 0, ft_strnlen(elem->content + 4, '\n'));
            ft_replace(&elem, )
            return ;
        }
            //!тут будем вызывать ф-ию которая будет записывать в line нашу строку
        // ?else
        // ?{
        //    //!Мы не нашли конца строки, тогда нам надо еще раз считать файл и перезаписать данные в content
        // ?   ft_read_write((*(int *)elem->content), buf);
        // ?}
    }
}

int             get_next_line(const int fd, char **line)
{
    static t_list   *beg;
    t_list          *tmp;
    void            *buf;
    ssize_t         byte_read;

    buf = ft_memalloc(BUFF_SIZE + 1 + 4);
    if (fd >= 0 && fd < FD_MAX)
    {
        if (!(tmp = ft_find_fd_to_lst(beg, fd)))
        {
            (*(int *)buf) = fd;
            byte_read = ft_read_write(fd, (char *)buf + 4);
            tmp = ft_lstnew(buf, ft_strlen((char *)buf + 4) + 1 + 4);
            ft_lstadd_end(&beg, tmp);
        }
        ft_build_line(tmp, line, buf);
    }
    return (-1);
}