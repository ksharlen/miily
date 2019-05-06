#include "libft.h"

t_list  *ft_lstelem(t_list **begin_list, size_t index)
{
    t_list *find_elem;
    size_t i;

    find_elem = NULL;
    if (begin_list)
    {
        if (*begin_list)
        {
            i = 0;
            find_elem = (*begin_list);
            while (i < index)
            {
                find_elem = find_elem->next;
            }
        }
    }
    return (find_elem);
}