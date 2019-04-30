#include "ft_mem_header.h"

int		main(void)
{
	char str_test[] = STR;
	char str_test1[] = "a";
	int size_ft;
	int	size;

	size_ft = ft_memcmp(str_test, str_test1, 10);
	size = memcmp(str_test, str_test1, 10);
	printf("size_ft = %d\n", size_ft);
	printf("size = %d\n", size);
	return (0);
}

// hello world
// hello own
