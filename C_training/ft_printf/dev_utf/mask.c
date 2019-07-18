#include "main.h"

static unsigned set_mask_10(unsigned val, int bytes)
{
	--bytes;
	while (bytes)
	{
		val = ft_set_bit(val, (bytes * 8) - 1);
		bytes--;
	}
	return (val);
}

unsigned char get_6_bits(unsigned unicode)
{
	unsigned char buf;

	buf = unicode;
	buf <<= 2;
	buf >>= 2;
	return (buf);
}

int		def_num_bytes(wchar_t unicode)
{
	int	bytes;

	//проверить на -1 в основной ф-ии
	bytes = -1;
	if (unicode >= 0 && unicode < 128)
		bytes = 1;
	else if (unicode >= 128 && unicode < 2048)
		bytes = 2;
	else if (unicode >= 2048 && unicode < 65536)
		bytes = 3;
	else if (unicode >= 65536 && unicode < 1114112)
		bytes = 4;
	return (bytes);
}

t_utf	inst_mask(t_utf utf)
{
	int mask;

	mask = 0;
	utf.utf_sym = 0;
	if (utf.bytes > 1)
	{
		mask = ft_set_bits(mask, utf.bytes, utf.bytes - 1);
		utf.utf_sym = ft_bitscpy(utf.utf_sym, mask, (utf.bytes * 8) - utf.bytes);
		utf.utf_sym = set_mask_10(utf.utf_sym, utf.bytes);
	}
	return (utf);
}