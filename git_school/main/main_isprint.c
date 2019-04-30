#include "ft_sym_header.h"

int		main(void)
{
	int i;

	i = -128;
	while (i < 128)
	{
		printf("%d) isprint = %d ", i, isprint(i));
		printf("%d) ft_isprint = %d\n", i, ft_isprint(i));
		i++;
	}
	return (0);
}
