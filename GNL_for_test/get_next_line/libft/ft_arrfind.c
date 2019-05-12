#include "libft.h"

ssize_t     ft_arrfind(int *arr, int data, size_t size)
{
    size_t i;

    if (size > 0)
    {
        i = 0;
        while (i < size)
        {
            if (arr[i] == data)
                return (i);
            i++;
        }
    }
    return (-1);
}