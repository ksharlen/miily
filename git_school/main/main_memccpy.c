#include "ft_mem_header.h"
#define CH 'd'
#define N 4

int		main(void)
{
	char memccpy_test_dest_str[SIZE] = "";
	char memccpy_test_src_str[SIZE] = "";
	char *memccpy_p_str;

	char ft_memccpy_test_dest_str[SIZE] = "";
	char ft_memccpy_test_src_str[SIZE] = "";
	char *ft_memccpy_p_str;

	memccpy_p_str = memccpy(memccpy_test_dest_str, memccpy_test_src_str, CH, N);
	printf("test_dest_str = %s\n", memccpy_test_dest_str);
	printf("p_str = %s\n", memccpy_p_str);

	ft_memccpy_p_str = ft_memccpy(ft_memccpy_test_dest_str, ft_memccpy_test_src_str, CH, N);
	printf("test_dest_str = %s\n", ft_memccpy_test_dest_str);
	printf("p_str = %s\n", ft_memccpy_p_str);
	return (0);
}
