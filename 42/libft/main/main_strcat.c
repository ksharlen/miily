#include "ft_str_header.h"

int		main(void)
{
	char str_test[0] = "";
	char str_test1[SIZE] = "hello";
	char *p_str;

	p_str = ft_strcat(str_test, str_test1);
	printf("str_test = %s\n", str_test);
	printf("p_str = %s\n", p_str);
	return (0);
}
