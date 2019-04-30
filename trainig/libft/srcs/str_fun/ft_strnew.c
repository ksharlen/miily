#include "ft_str_header.h"

char	*ft_strnew(size_t size)
{
	char *p_alloc;

	p_alloc = NULL;
	p_alloc = (char *)malloc(size);
	if (p_alloc == NULL)
		return (NULL);
	ft_bzero(p_alloc, size);
	return (p_alloc);
}
