#include "ft_str_header.h"

int		main(void)
{
	char str[] = "hello world";
	char str1[] = "";
	char *p_str;

	p_str = ft_strstr(str, str1);
	printf("p_str = %s\n", p_str);
	p_str = strstr(str, str1);
	printf("p_str = %s\n", p_str);
	return (0);
}
