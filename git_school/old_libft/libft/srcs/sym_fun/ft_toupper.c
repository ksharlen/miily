#include "ft_sym_header.h"

int		ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
