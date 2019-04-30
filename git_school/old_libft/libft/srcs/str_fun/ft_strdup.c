#include "ft_str_header.h"

char	*ft_strdup(const char *s)
{
	char	*p_res;
	size_t	size;

	size = strlen(s);
	if(!(p_res = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(p_res, s, size + 1);
	return (p_res);
}
