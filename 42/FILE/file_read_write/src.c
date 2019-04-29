#include "main.h"

int     ft_open_file(char *file_name)
{
    int fd;
    if (((fd = open(file_name, O_RDONLY | O_CREAT)) < 0) || (fd > 794721))
    {
        printf("error: too many files!\n");
        return (-1);
    }
    return (fd);
}

int     ft_read_write_file(int fd, char *buf)
{
    int byte_read;

    byte_read = 0;
    printf("fd = %d\n", fd);
    while ((byte_read = read(fd, buf, SIZE_BUFF)) > 0)
    {
     //   buf[byte_read] = 0;
        write(1, buf, byte_read);
    }
    if (close(fd) < 0)
    {
        printf("close failed");
        return (-1);
    }
    return (0);
}