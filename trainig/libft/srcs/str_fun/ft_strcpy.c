#include "ft_str_header.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*p_str;

	p_str = dest;
	while ((*dest++ = *src++))
			;
	return (p_str);
}
