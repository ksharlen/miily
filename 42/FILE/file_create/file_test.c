#include "file_test_header.h"

int     main(int argc, char *argv[])
{
    char *file_name;

    if (argc != 2)
    {
        printf("argc != 2...\nexit\n");
        return (0);
    }
    file_name = argv[1];
    if (ft_file_create(file_name))
        return (0);
    return(0);
}