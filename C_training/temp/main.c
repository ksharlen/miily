#include "libft.h"
#include <stdarg.h>
#include <string.h>

size_t		ft_num_format(const char *format)
{
	size_t	num_format;

	char str[] = "sdui";

	num_format = 0;
	while ()
	if ()
	return (num_format);
}

int				ft_test_printf(char *format, ...)
{
	va_list 	form;
	char 		*str;
	int			len;
	char		*str_str;

	va_start(form, format);
	if ((str_str = strstr(format, "%s")))
	{
		len = str_str - format;
		str = va_arg(form, char *);
		str = ft_strnjoin(format, str, len, ft_strlen(str));
		len = ft_strlen(str);
	}
//	printf("len = %d\n", len);
	write(1, str, len);
	va_end(form);
	return (0);
}

int     main(void)
{
//	char *s1 = "how are you?";
//	ft_test_printf("hello %%s", s1);
	printf("%u", 123);
    return (0);
}