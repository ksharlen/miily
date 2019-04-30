#include "ft_mem_header.h"

int		main(void)
{
	char ft_memmove_test[SIZE] = STR;
	char memmove_test[SIZE] = STR;
	char *p_ft_memmove;
	char *p_memmove;

	ft_memmove(ft_memmove_test, ft_memmove_test + 4, 7);
	memmove(memmove_test, memmove_test + 4, 7);

	printf("ft_memmove_test = %s\n", ft_memmove_test);
	printf("memmove_test = %s\n", memmove_test);
	return (0);
}
