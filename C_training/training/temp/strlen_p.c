#include <stdio.h>
#include <string.h>

static size_t   strlen_p(const char *str)
{
    const char *p_str;

    p_str = str;
    if (str && *str)
        while (*(++str))
            ;
    return (str - p_str);
}

int     main(void)
{
    char *str;
    size_t test;

    str = "hello world";
    test = strlen_p(NULL);
    printf("len = %ld\n", test);
    return (0);
}