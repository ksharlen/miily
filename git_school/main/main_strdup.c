#include "ft_str_header.h"
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	char p_str[5];
	char *p_strdup;

	p_str[0] = 'a';
	p_str[1] = '\0';
	p_strdup = ft_strdup(p_str);
	ft_putstr(p_strdup);
	free(p_strdup);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
