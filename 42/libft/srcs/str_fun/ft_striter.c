#include "ft_str_header.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		f(*s);
		s++;
	}
}
