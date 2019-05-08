#include "libft.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int     main(int argc, char **argv)
{
    // t_list *beg;
    // t_list *new;
    // t_list *res;
    int fd;
    char *line;
    int res;

    line = NULL;
    fd = open("test", O_RDONLY);
    printf("fd = %d\n", fd);
    res = get_next_line(fd, &line);
    printf("line = %s res = %d\n", line, res);
    res = get_next_line(fd, &line);
    printf("line = %s res = %d\n", line, res);
    res = get_next_line(fd, &line);
    printf("line = %s res = %d\n", line, res);
    res = get_next_line(fd, &line);
    printf("line = %s res = %d\n", line, res);
    //get_next_line(fd, &p);
    //get_next_line(fd, &p);
    //printf("res = %d\n", res);
    // beg = NULL;
    // new = ft_lstnew("hello", ft_strlen("hello") + 1);
    // ft_lstadd_end(&beg, new);
    // new = ft_lstnew("world", ft_strlen("world") + 1);
    // ft_lstadd_end(&beg, new);
    // new = ft_lstnew("how", ft_strlen("how") + 1);
    // ft_lstadd_end(&beg, new);
    // res = ft_lstelem(beg, 20, ft_lstsize(beg));
    // printf("size = %lu\n", ft_lstsize(beg));
    // if (!res)
    //     printf("%s", (char *)res);
    // else
    // {
    //     printf("%s\n", (char *)res->content);
    // }
    return (0);
}