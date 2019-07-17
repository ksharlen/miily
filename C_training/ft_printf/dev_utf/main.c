#include "main.h"

int		main(void)
{
	t_utf utf;

	utf.bytes = 4;
	utf = inst_mask(utf);
	//printf("utf = %u\n", utf.utf_sym);
	return (0);
}