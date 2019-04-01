#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	int byte;
	char str[20];

	if (argc != 2)
	{
		printf("incorrect input\n");
		return (0);
	}
	int fd;
	printf("hello world\n");
	fd = open(argv[1], O_RDWR);
	byte = read(fd, str, 1024);
	if (!strcmp(str, "hello world\n\0"))
		printf("its work!\n");
	else
		printf("its not work :((\n");
	close(fd);
	printf("byte = %d\n", byte);
	printf("%d\n", strlen("hello world"));
	return (0);
}
