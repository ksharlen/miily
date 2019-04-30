#include "ft_mem_header.h"

int		main(void)
{
	char 	memchr_str[SIZE] = STR;
	char	ft_memchr_str[SIZE] = STR;
	char 	*p_memchr_str;
	char	*p_ft_memchr_str;

	printf("str_memchr = %s\n", memchr_str);
	p_memchr_str = memchr(memchr_str, 'd', 10000);
	printf("p_str_memchr = %s\n", p_memchr_str);

	printf("str_ft_memchr = %s\n", ft_memchr_str);
	p_ft_memchr_str = ft_memchr(ft_memchr_str, 'd', 10000);
	printf("str_ft_memchr = %s\n", p_ft_memchr_str);
	return (0);
}
