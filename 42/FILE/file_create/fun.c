#include "file_test_header.h"

int    ft_file_create(char *file_name)
{
    int fd;
    int flags;

    flags = O_CREAT;
    fd = open(file_name, flags, 0777);
    if (fd < 0)
    {
        printf("cannot be create!\n");
        return (1);
    }
    else
    {
        printf("file %s wille be created!\n", file_name);
        if ((close(fd)) < 0)
        {
            printf("can not be close file!\n");
            return (1);
        }
        else
            printf("file closed\n");
    }
    return (0);
}