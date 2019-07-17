#include "main.h"

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