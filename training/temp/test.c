#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

FILE	*fp;

int		main(void)
{
	int fd;
	ssize_t ret;
	char *line;

	fp = fopen("sum.c", O_RDONLY);
	ret = getline(&line, 50, fd);

	printf("line = %s	ret = %ld\n", line, ret);
	return (0);
}