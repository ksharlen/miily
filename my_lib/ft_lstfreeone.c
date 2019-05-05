#include "libft.h"

void    ft_lstfreeone(void *content, size_t content_size)
{
    if (content_size)
        ft_memdel(&content);
}