#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

int		main(void)
{
	int fd;
	int ret;
	char *line;
	int i;

	i = 1;
	fd = open("serc", O_RDONLY);

	while ((ret = get_next_line(fd, &line)))
	{
		printf("%d)	%s		ret = %d\n", i, line, ret);
		i++;
	}
	printf("ret = %d\n", ret);
	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");

	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n\n", line, ret);
	// printf("end.\n");


	// while (ret = get_next_line(fd, &line))
	// {
	// 	printf("%d)		line = %s", i, line);//				ret = %d\n", i, line, ret);
	// 	++i;
	// }
	return (0);
}