#include "ft_str_header.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
