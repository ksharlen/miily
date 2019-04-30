#include "ft_str_header.h"

int		main(void)
{
	char str_test[SIZE] = "Ilya + Katrin = ";
	char str_test1[SIZE] = "LOVE";
	char *p_str;

	p_str = ft_strncat(str_test, str_test1, 10);
	printf("%s\n", p_str);
	//printf("str_test = %s\n", str_test);
	return (0);
}
