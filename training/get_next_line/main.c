#include "libft.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int     main(void)
{
    // t_list *beg;
    // t_list *new;
    // t_list *res;
    int res;
    int fd;
    int fd1;
    char *p;

    fd = open("Makefile", O_RDONLY);
    fd1 = open("test", O_RDONLY);
    //printf("fd = %d\n", fd);
    get_next_line(fd, &p);
    get_next_line(fd, &p);
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