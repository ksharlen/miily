#include "ft_str_header.h"

int		main(void)
{
	char str[] = "hello world";
//	char str1[] = "owner";
	char *p_str;

/*	p_str = ft_strcpy(str, str1);
	printf("str = %s\n", str);
	printf("p_str = %s\n", p_str);
 */
	p_str = ft_strcpy(str, "as;dfjaselifjsaelijfaelfj");
	printf("str = %s\n", str);
	printf("p_str = %s\n", p_str);

	return (0);
}
