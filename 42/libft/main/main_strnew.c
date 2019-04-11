#include "ft_std_header.h"

int		main(void)
{
	char *p_str;

	p_str = ft_strnew(30);
	fgets(p_str, 30, stdin);
	printf("p_str = %s", p_str);
	free(p_str);
	return (0);
}
