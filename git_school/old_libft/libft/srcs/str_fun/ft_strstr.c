#include "ft_str_header.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
	size_t 	i;
	size_t 	j;
	char 	*p_str;

	i = 0;
	p_str = (char *)haystack;
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
		{
			p_str = (char *)&haystack[i];
			break;
		}
		else
			p_str = NULL;
		i++;
	}
	return (p_str);
}
