#include "../include/ft_printf.h"

int		main(void)
{
	wchar_t a = L'ж';

	//ft_printf("a = %c", a);
	//ft_printf("a = %10c\n", 'd');
	// ft_printf("a = %c\n", a);

	ft_printf("%.1lc\n", L'П');
	return (0);
}