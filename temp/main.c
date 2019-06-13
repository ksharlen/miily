#include "libft.h"
#include <stdarg.h>

typedef	union 	form
{
	long	l;
	int		d;
	char 	c;
	short	hhd;
}				type;

int		ft_test(size_t size_num, ...)
{
	int		sum;
	va_list		form;

	va_start(size_num, form);
	return (sum);
}

void	print_bits(long *octat)
{
	int y;
	int per;

	per = 0;
	y = 63;
	while(y >= 0)
	{
		per = (*octat>>y & 1) + '0';
		write (1, &per, 1);
		if (!(y % 8))
			write(1, " ", 1);
		y--;
	}
}

int		main(void)
{
	type	fom;
	int		n;

	fom.l = 12312412412421322;
	fom.d = 1;
	printf("привет мир\n");

	return (0);
}