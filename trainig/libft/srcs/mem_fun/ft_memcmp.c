#include "ft_mem_header.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i) && i++ < n);
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}	
