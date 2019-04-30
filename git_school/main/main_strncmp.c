#include "ft_str_header.h"

int		main(void)
{
	char str[] = "hello";
	char str1[] = "herload";

	printf("ft_strncmp = %d\n", ft_strncmp(str, str1, 3));
	printf("strncmp = %d\n", strncmp(str, str1, 3));
	return (0);
}
