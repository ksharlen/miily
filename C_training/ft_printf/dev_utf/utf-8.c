#include "main.h"

unsigned set_bit(unsigned val, int num)
{
	return (val | (1 << num));
}

unsigned set_bits(unsigned val, unsigned bits, int num)
{
	while (bits--)
		val = set_bit(val, num--);
	return (val);
}

static	unsigned set_bits_in(unsigned value, unsigned inval, int num)
{
	return (value | (inval << num));
}

static unsigned set_mask_10(unsigned val, int bytes)
{
	--bytes;
	while (bytes)
	{
		val = set_bit(val, (bytes * 8) - 1);
		bytes--;
	}
	return (val);
}

int		def_num_bytes(wchar_t unicode)
{
	int	bytes;

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
		mask = set_bits(mask, utf.bytes, utf.bytes - 1);
		utf.utf_sym = set_bits_in(utf.utf_sym, mask, (utf.bytes * 8) - utf.bytes);
		utf.utf_sym = set_mask_10(utf.utf_sym, utf.bytes);
	}
	return (utf);
}