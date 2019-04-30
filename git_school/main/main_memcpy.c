#include "ft_mem_header.h"

int		main(void)
{
	char 	test_str_memcpy[SIZE] = "hello world";
	char 	test_str_ft_memcpy[SIZE] = "hello world";
	int		test[SIZE] = { 1, 2, 3, 4};
	memcpy(test_str_memcpy, test, 10);
	ft_memcpy(test_str_ft_memcpy, test, -1);
	printf("memcpy: %s\n", test_str_memcpy);
	printf("ft_memcpy: %s\n", test_str_ft_memcpy);
	return (0);
}
