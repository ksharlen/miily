#include "main.h"

int     main(int argc, char *argv[])
{
    int fd;
    char buf[SIZE_BUFF + 1];

    if (argc != 2)
    {
        printf("too many arguments\n");
        return (0);
    }
    if ((fd = ft_open_file(argv[1])) < 0)
        return (0);
    if (ft_read_write_file(fd, buf))
        return (0);
    return (0);
}