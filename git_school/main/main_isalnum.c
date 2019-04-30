#include "ft_sym_header.h"

int		main(void)
{
	size_t i;

	i = 0;
	while (i < 256)
	{
		if (isalnum(i))
			printf("isalnum = %lu ", i);
		if (ft_isalnum(i))
			printf("ft_isalnum = %lu\n", i);
		i++;
	}
	return (0);
}
