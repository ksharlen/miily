#include "ft_mem_header.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char buf[n];

	ft_memset(buf, 0, n);
	ft_memcpy(buf, src, n);
	ft_memcpy(dest, buf, n);
	return (dest);
}
