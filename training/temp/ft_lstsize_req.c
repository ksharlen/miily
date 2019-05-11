#include "libft.h"

size_t      ft_lstsize_req(t_list *begin_list)
{
    if (!begin_list)
        return (0);
    return (1 + ft_lstsize_req(begin_list->next));
}

int     main(void)
{
    t_list      *beg;
    size_t      size;

    size = 0;
    beg = NULL;
    ft_lstadd_end(&beg, ft_lstnew("hello", 5));
    ft_lstadd_end(&beg, ft_lstnew("hello", 5));
    ft_lstadd_end(&beg, ft_lstnew("hello", 5));
    size = ft_lstsize_req(beg);
    printf("size = %ld\n", size);
}