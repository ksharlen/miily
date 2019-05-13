#include "libft.h"

int		main(void)
{
	void *test;

	test = ft_memnjoin("hello", " world", 4, 5);
	printf("test = %s\n", (char *)test);
	return (0);
}