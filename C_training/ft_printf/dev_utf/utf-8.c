#include "main.h"

static t_utf push_unicode(t_utf utf)
{
	int index;

	index = 0;
	while (utf.bytes)
	{
		utf.utf_sym = ft_bitscpy(utf.utf_sym, get_6_bits(utf.unicode), index);
		utf.unicode >>= 6;
		index += 8;
		--utf.bytes;
	}
	return (utf);
}

t_utf work_utf(t_utf utf)
{
	//Проверить на кол-во байт, если 1 то ничего делать не надо
	if (utf.bytes > 1)
	{
		utf = inst_mask(utf);
		utf = push_unicode(utf);
	}
	return (utf);
}
