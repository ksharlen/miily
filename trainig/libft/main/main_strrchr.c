#include "ft_str_header.h"

int		main(void)
{
	char str[] = "hello world";
	char *p_str;

	p_str = ft_strrchr(str, 'l');
	printf("ft_strrchr = %s\n", p_str);
	p_str = strrchr(str, 'l');
	printf("strrchr = %s\n", p_str);
	return (0);
}
