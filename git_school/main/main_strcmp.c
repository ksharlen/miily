#include "ft_str_header.h"

int		main(void)
{
	char str1[] = "h";
	char str2[] = "hello";

	printf("ft_strcmp = %d\n", ft_strcmp(str1, str2));
	printf("strcmp = %d\n", strcmp(str1, str2));
	return (0);
}
