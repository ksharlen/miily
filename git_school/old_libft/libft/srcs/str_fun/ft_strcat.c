#include "ft_str_header.h"

char    *ft_strcat(char *dest, const char *src)
{
	int		 len;
	char	*p_str;

	p_str = dest;
	len = ft_strlen(dest);
	dest = dest + len;
	ft_strcpy(dest, src);
	return (p_str);
}
