#include "libft.h"

t_list  *ft_lstreplace(t_list **rep, void *content, size_t content_size)
{
    if (rep)
        if (*rep && content)
        {
            ft_lstfreeone((*rep)->content, (*rep)->content_size);
            (*rep)->content = malloc(content_size);
            if (!(*rep))
                return (NULL);
            ft_memcpy((*rep)->content, content, content_size);
            (*rep)->content_size = content_size;
            return (*rep);
        }
    return (NULL);
}