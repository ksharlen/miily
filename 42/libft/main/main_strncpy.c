#include "ft_str_header.h"

int		main(void)
{
	char str_test[SIZE] = "hello world";
	char str_test1[SIZE] = "broad";
	char *p_str;
	
	p_str = strncpy(str_test, str_test1, 20);
	printf("p_str = %s\n", p_str);
	printf("str_test = %s\n", str_test);
	return (0);
}
