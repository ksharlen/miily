#include "ft_printf.h"

wchar_t				*convert_utf8(wchar_t *str)
{
	t_utf 			utf;
	size_t 			len;
	size_t 			index;

	index = 0;
	len = ft_wcslen(str);
	while (index < len)
	{
		utf.bytes = def_num_bytes(str[index]);
		utf.unicode = str[index];
		utf.utf_sym = inst_mask(utf);
		utf = push_unicode(utf);
		str[index++] = utf.unicode;
		push_wchar_to_buf(utf);
	}
	//printf("%s\n", str);
	return (str);
}

unsigned char		*push_wchar_to_buf(t_utf utf)
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
