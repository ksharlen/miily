#include "ft_mem_header.h"

void	ft_bzero(void *s, size_t n)
{
	size_t byte_shift;
	size_t zero;

	zero = 0;
	byte_shift = 0;
	while (byte_shift < n)
		*((unsigned char *)s + byte_shift++) = zero;
}
