#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int     main(void)
{
    int fd;
    int fd2;

    fd = open("libft.h", O_RDONLY);
    printf("fd = %d\n", fd);
    fd2 = open("main.c", O_RDONLY);
    printf("fd2 = %d\n", fd2);
    return (0);
}
