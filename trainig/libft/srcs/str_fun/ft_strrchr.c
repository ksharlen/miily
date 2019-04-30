#include "ft_str_header.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p_str;

	p_str = NULL;
	while (*s)
	{
		if (*s == c)
			p_str = (char *)s;
		s++;
	}
	if (*s == c)
		p_str = (char *)s;
	return (p_str);
}
