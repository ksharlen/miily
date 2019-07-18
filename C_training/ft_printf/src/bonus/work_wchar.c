#include "ft_printf.h"

unsigned char			*push_wchar_to_buf(t_utf utf)
{
	unsigned char 	*buf;
	unsigned char	inbuf;

	while (utf.bytes)
	{
		inbuf = (utf.utf_sym >> (8 * (utf.bytes - 1)));
		buf = work_buf(&inbuf, 1);
		--utf.bytes;
	}
	return (buf);
}
