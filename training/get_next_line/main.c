#include "libft.h"

int     main(void)
{
    t_list *beg;
    t_list *find;

    beg = NULL;
    beg = ft_lstnew("hello world", ft_strlen("hello world") + 1);
    // get_next_line(13, &beg);
    // get_next_line(24, &beg);
    find = ft_lstelem(&beg, 0);
    printf("find->content = %s\n", find->content);
    return (0);
}