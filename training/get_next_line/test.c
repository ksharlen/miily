#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int     main(void)
{
    char str1[10] = "hello";
    char str2[5] = "jo";
    char *p;

    p = ft_strjoin(str1, str2);
    printf("len = %ld\n", ft_strlen(p));
    free(p);
    return (0);
}