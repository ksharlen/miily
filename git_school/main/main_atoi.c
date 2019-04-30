#include "ft_str_header.h"

int		main(void)
{
	char str[SIZE];
//	char str1[] = "-0000000000000000000000000000000000000900000003811";

	while (1)
	{
		fgets(str, 50, stdin);
		printf("ft_atoi = %d\n", ft_atoi(str));
//		printf("atoi = %d\n", atoi(str1));
	}
	return (0);
}
