#include "libft.h"

static t_list   *ft_find_fd_to_lst(t_list *beg, int fd)
{
    if (beg)
        while (beg)
        {
            if ((*(int *)beg->content) == fd)
            {
//                printf("3\n");
                printf("yahhooooo\n");
                return (beg);
            }
            beg = beg->next;
        }
    printf("fuck\n");
    return (NULL);
}

static ssize_t     ft_read_write(const int fd, char *buf)
{
    ssize_t byte_read;

    byte_read = read(fd, buf, BUFF_SIZE);
    buf[byte_read] = '\0';
//    printf("%s\n", buf);
    return (byte_read);
}

static int     ft_build_line(t_list *elem, char **line, char *buf)
{
    char *back_n;
    void *tmp;
    ssize_t byte_read;
    size_t size_read;
    int ret;

    byte_read = -2;
    size_read = 0;
    ft_memdel((void **)line);
    while (1)
    {
        if ((back_n = ft_strchr(elem->content + 4, '\n')) || byte_read == 0)
        {
            printf("one\n");
//printf("sig fault, back_n = %s\n", back_n);
//            ft_memdel((void **)line);
            printf("end seg\n");
            (*line) = ft_strsub(elem->content + 4, 0, size_read);
            tmp = elem->content;
//? Начало ошибки
            elem->content = ft_strnjoin(tmp, back_n + 1, 4, ft_strlen(back_n + 1));
//            printf("elem->content = %s\n", (char *)elem->content);
//printf("elem->content = %s\nft_strlen = %lu\n", (char *)elem->content, ft_strlen(back_n + 1));
            ft_memdel(&tmp);
//? Конец ошибки
            return (1);
            ret = 1;
        }
        else
        {
            byte_read = ft_read_write(*(int *)elem->content, buf);
            printf("size_read = %ld\n", size_read);
            if (!byte_read)
                continue ;
            if (byte_read == -1)
                return (-1);
            size_read += byte_read;
            tmp = elem->content;
            elem->content = ft_memalloc(4 + ft_strlen(elem->content + 4));
            ft_memcpy(elem->content, tmp, 4 + ft_strlen(tmp + 4));
            ft_memcpy((elem->content + 4) + ft_strlen(tmp + 4), buf, ft_strlen(buf) + 1);
            ft_memdel(&tmp);
        }
    }
    printf("content = %s\n", (char *)elem->content + 4);
//    return (ret);
}

int             get_next_line(const int fd, char **line)
{
    static t_list   *beg;
    t_list          *tmp;
    void            *buf;
    ssize_t         byte_read;
    int             ret;

// printf("1\n");
    //printf("beg->content = %c\n", (char *)beg->content);
    buf = ft_memalloc(BUFF_SIZE + 1 + 4);
// printf("2\n");
    if (fd >= 0 && fd < FD_MAX && BUFF_SIZE > 0)
    {
        if (!(tmp = ft_find_fd_to_lst(beg, fd)))
        {
            //printf("fd = %d")
// printf("3\n");
            //printf("3\n");
// printf("boom\n");
            (*(int *)buf) = fd;
// printf("4\n");
            byte_read = ft_read_write(fd, (char *)buf + 4);
//printf("5\n");
            tmp = ft_lstnew(buf, ft_strlen((char *)buf + 4) + 1 + 4);
//printf("6\n");
            ft_lstadd_end(&beg, tmp);
//printf("7\n");
//printf("beg = %p\n", beg);
        }
//        printf("content = %s\n", (char *)tmp->content);
        ret = ft_build_line(tmp, line, buf);
//printf("beg->content = %d\n", *(int *)beg->content);
        ft_memdel(&buf);
        return (ret);
    }
    return (-1);
}