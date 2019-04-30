#include "ft_mem_header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		byte_shift;
	void 		*p_res;

	p_res = NULL;
	byte_shift = 0;
	if (!n)
		n = ft_strlen(s);
	while (byte_shift < n)
	{
		if ((*(unsigned char *)s + (unsigned char)byte_shift) == c)
		{
			p_res = ((unsigned char *)s + byte_shift);
			byte_shift = n;
		}
		else
			++byte_shift;
	}
	return (p_res);
}
