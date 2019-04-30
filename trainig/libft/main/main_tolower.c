#include "ft_sym_header.h"

int		main(void)
{
	int i;

	i = -128;
	while (i < 256)
	{
		printf("%d) tolower = %c ", i, tolower(i));
		printf("%d) ft_tolower = %c\n", i, ft_tolower(i));
		i++;
	}
		printf("%d) tolower = %c\n", 13, tolower(13));
		printf("%d) ft_tolower = %c\n", 13, ft_tolower(13));
	return (0);
}
