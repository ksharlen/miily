#include "ft_mem_header.h"

void	*ft_memalloc(size_t size)
{
	void *p_alloc;

	p_alloc = NULL;
	p_alloc = malloc(size);
	if (p_alloc == NULL)
		return (NULL);
	ft_bzero(p_alloc, size);
	return (p_alloc);
}
