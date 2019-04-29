#include <stdio.h>

void    ft_sort_include(int *test, size_t size);

int     main(void)
{
    int test[] = { 5, 24, 51, 42, 31, 1424, 43, 4 };

    ft_sort_include(test, 8);
//    ft_print_int(test)
    return (0);
}

void    ft_sort_include(int *test, size_t size)
{
    size_t i;
    int value;
    size_t index;

    i = 1;
    while (i < size)
    {
        index = i;
        value = test[i];
        while ((index > 0) && (test[index - 1] > value))
        {
            test[index] = test[index - 1];
            --index;
        }
        test[index] = value;
        i++;
    }
    i = 0;
    while (i < size)
    {
        printf("test[%lu] = %d\n", i, test[i]);
        i++;
    }
}