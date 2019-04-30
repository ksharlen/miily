#include "ft_str_header.h"

int		main(void)
{
	char str[] = "h";
	char str1[] = "he";

	printf("ft_strncmp = %d\n", ft_strncmp(str, str1, 5));
	printf("strncmp = %d\n", ft_strncmp(str, str1, 5));
	return (0);
}
