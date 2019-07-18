#include "../include/ft_printf.h"
#include <wchar.h>
#include <assert.h>

int		main(void)
{

	int fd;

	fd = open("testing", O_WRONLY);
	ft_printf("%v %ls", fd, L"Привет мир!");
	close(fd);
	return (0);
}