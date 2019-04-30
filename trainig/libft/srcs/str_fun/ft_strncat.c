#include "ft_str_header.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		len;
	char 	*p_str;
	size_t	i;

	i = 0;
	p_str = dest;
	len = ft_strlen(dest);
	dest += len;
	while ((*dest++ = *src++) && i < n - 1)
		i++;
	*dest = '\0';
	return (p_str);
}
