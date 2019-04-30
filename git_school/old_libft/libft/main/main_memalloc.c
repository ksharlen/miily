#include "ft_std_header.h"

int		main(void)
{
	char *str;
	size_t mem;

	mem = 6;
	str = (char *)ft_memalloc(mem);
	fgets(str, 6, stdin);
	printf("str = %s\n", str);
	ft_memdel((void *)&str);
	return (0);
}
