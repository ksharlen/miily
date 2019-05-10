#include "get_next_line.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

int				main(void)
{
    // printf("size size_t = %ld", sizeof(size_t));
    int fd;
    char *line;
    int ret;

    line = NULL;
    fd = open("serc", O_RDONLY);
    ret = get_next_line(fd, &line);
    printf("fd = %d\n", fd);
    printf("ret = %d\n", ret);
    printf("line = %s\n", line);
    ft_strdel(&line);
    //? не забыть про утечку если память под conntent не выделлилась.
	return (0);
}