#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int     main(void)
{
    char str[] = "123hello\nworld";
    char *p;

    p = ft_strnjoin(str, str + 9, 3, ft_strlen(str + 9));
    printf("p = %s\n", p);
    return (0);
}