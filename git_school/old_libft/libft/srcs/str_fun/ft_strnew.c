#include "ft_str_header.h"

char	*ft_strnew(size_t size)
{
	char *p_alloc;

	p_alloc = NULL;
	p_alloc = (char *)malloc(size + 1);
	if (p_alloc == NULL)
		return (NULL);
	ft_bzero(p_alloc, size + 1);
	return (p_alloc);
}
