#include "../libft/libft.h"

int		main(void)
{
	if (ft_memisstr("yes", "", 3))
		printf("true");
	else
		printf("false");
	return (0);
}