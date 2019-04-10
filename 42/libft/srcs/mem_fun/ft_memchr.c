#include "ft_mem_header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	byte_shift;
	void	*p_str;

	byte_shift = 0;
	while (byte_shift < n)
	{
		if (*((unsigned char *)s + byte_shift) == c)
		{
			p_str = ((unsigned char *)s + byte_shift);
			byte_shift = n;
		}
		else
			++byte_shift;
	}
	return (p_str);
}
