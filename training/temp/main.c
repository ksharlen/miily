#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int     main(void)
{
    int fd;
    char buf[50];
    int byte_read;

    fd = open("test", O_RDONLY);
    printf("fd = %d\n", fd);
    byte_read = read(fd, buf, 50);
    //buf[byte_read] = 0;
    printf("buf = %s\n", buf);
    return (0);
}