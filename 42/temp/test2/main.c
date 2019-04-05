#include "header.h"

int		ft_strlen(const char *str);

int		main(void)
{

	char str[20] = "hello world";

	printf("len = %d\n", ft_strlen(str));
	return (0);
}

int		ft_strlen(char *const str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
