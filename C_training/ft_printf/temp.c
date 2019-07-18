#include <wchar.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int		ft_printf(int num, ...)
{
	va_list form;
	wchar_t *str;

	va_start(form, num);
	str = va_arg(form, wchar_t *);
	write(1, str, 13);
	//printf("str = %s\n", str);
	return (0);
}

int		main(void)
{
	wchar_t a = L'а';

	//ft_printf(4, "hello worldп");
	//printf("%lc", 'п');
	//write(1, &a, 1);
	printf("%lc", L'п');
	return (0);
}