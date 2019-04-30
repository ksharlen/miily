#include "ft_str_header.h"

int		main(void)
{
	char str[] = "hello world";
	char *p_str;

	p_str = ft_strnstr(str, "o w jei", 3);
	printf("p_str = %s\n", p_str);
	return (0);
}
