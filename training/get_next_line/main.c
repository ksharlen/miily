#include "libft.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int     main(int argc, char **argv)
{
    int     fd;
    int     fd1;
    int     ret;
    int     ret1;
    char    *line;
    size_t  i;

    fd = open("serc", O_RDONLY);
    i = 1;
    while (i < 73)
    {
        get_next_line(fd, &line);
        printf("%lu)    line = %s\n", i, line);
        free(line);
        i++;
    }
    // fd1 = open("serc", O_RDONLY);
    // ret = get_next_line(fd, &line);
    // printf("line fd = %s\nret = %d\n", line, ret);
    // ret1 = get_next_line(fd1, &line);
    // printf("line fd1 = %s\nret1 = %d\n", line, ret1);
    return (0);
}