#include "ft_str_header.h"

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
	s = NULL;
}
