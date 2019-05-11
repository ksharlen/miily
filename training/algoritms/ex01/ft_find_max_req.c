#include "libft.h"

t_list      *ft_find_max_req(t_list *begin_list)
{
    if (!begin_list->next)
        return (begin_list);
    return ();
}

int     main(void)
{
    t_list *beg;
    t_list *max;

    beg = NULL;
    ft_lstadd_end(&beg, ft_lstnew("hello", 13));
    ft_lstadd_end(&beg, ft_lstnew("hello", 25));
    ft_lstadd_end(&beg, ft_lstnew("hello", 40));
    ft_lstadd_end(&beg, ft_lstnew("hello", 256));
    printf("1\n");
    ft_lstadd_end(&beg, ft_lstnew("hello", 31));
    ft_lstadd_end(&beg, ft_lstnew("hello", 51));
    max = ft_find_max_req(beg);
    printf("content_size = %ld\n", max->content_size);
    return (0);
}