#include "libft.h"

static int  ft_find_fd(int *rep_fd, const int fd, int *size_to)
{
    size_t i;

    i = 0;
    while (i < *size_to)
    {
        if (fd == rep_fd[i])
            return (i);
        ++i;
    }
    return ((*size_to)++);
}

void    ft_print(int *rep_fd, int size)
{
    size_t i;

    i = 0;
    while (i < size)
        printf("fd[%lu] = %d\n", i, rep_fd[i++]);
}

int    get_next_line(const int fd, char **line)
{
    static int rep_fd[7198];
    static int size_to;
    static t_list *beg;

    if (fd < FD_MAX)
    {
        ft_find_fd(rep_fd, fd, &size_to);
    }
    return (0);
}