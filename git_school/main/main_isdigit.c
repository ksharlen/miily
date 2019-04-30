#include "ft_sym_header.h"

int		main(void)
{
	size_t i;

	i = 0;
	while (i < 256)
	{
		printf("%lu) isdigit = %d ", i, isdigit(i));
		printf("%lu) ft_isdigit = %d\n", i, ft_isdigit(i));
		i++;
	}
	return (0);
}
