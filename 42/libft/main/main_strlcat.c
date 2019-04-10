#include "ft_str_header.h"

int		main(void)
{
	char str[] = "";
	char *p_str;
	char *p_str1;

	p_str1 = strchr(str, '\0');
	p_str = ft_strchr(str, '\0');
	printf("p_str = %s\n", p_str);
	printf("p_str1 = %s\n", p_str1);
	return (0);
}
