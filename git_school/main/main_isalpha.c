#include "ft_sym_header.h"

int		main(void)
{
	size_t i;

	i = 0;
	while (i < 256)
	{
		printf("%lu) isalpha = %d ", i, isalpha(i));
		printf("%lu) ft_isalpha = %d\n", i, ft_isalpha(i));
		i++;
	}

	return (0);
}
