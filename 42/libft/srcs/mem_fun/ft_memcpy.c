#include "ft_mem_header.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t byte_shift;

	byte_shift = 0;
	while (byte_shift < n)
	{
		*((unsigned char *)dest + byte_shift) = *((unsigned char *)src + byte_shift);
		++byte_shift;
	}
	return (dest);
}
