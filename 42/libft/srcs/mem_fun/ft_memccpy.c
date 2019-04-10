#include "ft_mem_header.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t n)
{
	size_t 	byte_shift;
	void	*p_ch;
	int		next_elem_after_ch;

	next_elem_after_ch = 1;
	p_ch = NULL;
	byte_shift = 0;
	while (byte_shift < n)
	{
		if (*((unsigned char *)src + byte_shift) == ch)
		{
			*((unsigned char *)dest + byte_shift) = ch;
			p_ch = (unsigned char *)dest + byte_shift + next_elem_after_ch;
			byte_shift = n;
		}
		else
		{
			*((unsigned char *)dest + byte_shift) = *((unsigned char *)src + byte_shift);
			++byte_shift;
		}
	}
	return (p_ch);
}
