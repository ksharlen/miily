int     ft_slim_elem(int *num, size_t index, size_t size)
{
    size_t  i;
    int     small_elem;
    int     tmp;

    i = num[index];
    small_elem = num[i];
    while (small_elem < size)
        if (small_elem > num[i])
            small_elem = num[i++];
    return (small_elem);
}

void    ft_sort(int *num, size_t size)
{
    size_t  i;
    int     tmp;

    i = 0;
    while (i < size)
    {
        tmp = num[i];
        num[i] = ft_slim_elem(num, i, size);
        
    }
}