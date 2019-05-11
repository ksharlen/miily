#include <stdio.h>

int     sum(int *num, size_t size)
{
    if (size == 1 || size == 0)
        return (num[0]);
    return (num[size - 1] + sum(num, --size));
}

int     sum2(int *num, size_t size)
{
    int res;

    res = 0;
    while (size--)
        res += num[size];
    return (res);
}

int     main(void)
{
    int num[4] = { 1, 2, 3, 4 };
    int res;

    res = sum2(num, 4);
    printf("res = %d\n", res);
    return (0);
}