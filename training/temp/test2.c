#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int     main(int argc, char *argv[])
{
    int fd;
    char buf[1000];
    ssize_t byte_read;

    if (argc != 2)
    {
        printf("BOOM\n");
        return (0);
    }
    else
    {
        fd = open(argv[1], O_RDONLY);
        if (fd < 0)
        {
            printf("file not open");
            return (0);
        }
        else
        {
            byte_read = read(fd, buf, 1000);
            buf[byte_read] = '\0';
            printf("%s\n", buf);
        }
    }
    return (0);
}