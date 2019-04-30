#include "ft_sym_header.h"

int		main(void)
{
	int i;

	i = -127;
	while (i < 256)
	{
		printf("%d) toupper = %c ", i, toupper(i));
		printf("%d) ft_toupper = %c\n", i, ft_toupper(i));
		i++;
	}
		printf("%d) toupper = %c\n", 13, toupper(13));
		printf("%d) ft_toupper = %c\n", 13, ft_toupper(13));

	return (0);
}
