#include "libft.h"

size_t  ft_strnlen(const char *str, int n)
{
    size_t len;

    len = 0;
    if (str)
    {
        while (*str && *str++ != n)
            len++;
    }
    return (len);
}