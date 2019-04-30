#include "ft_mem_header.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
