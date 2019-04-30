#include "ft_sym_header.h"

int		main(void)
{
	int i;

	i = -256;
	while (i < 256)
	{
		printf("%d) isascii = %d ", i, isascii(i));
		printf("%d) ft_isascii = %d\n", i, ft_isascii(i));
		i++;
	}
	return (0);
}
