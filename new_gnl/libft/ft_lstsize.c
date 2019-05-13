#include "libft.h"

size_t  ft_lstsize(t_list *beg)
{
    size_t ret_size;

    ret_size = 0;
    if (beg)
    {
        while (beg)
        {
            ret_size++;
            beg = beg->next;
        }
    }
    return (ret_size);
}