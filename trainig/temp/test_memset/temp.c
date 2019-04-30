#include <stdio.h>
#include <math.h>
#include <memory.h>

static void		ft_print_int_array(int const *print_array, int const size);

int		main(void)
{
	int	buf[10];

	printf("a = %.0f\n", pow(97, 4) * 2);
	memset(buf, 'a', 40);
	ft_print_int_array(buf, 10);
	return (0);
}

static void		ft_print_int_array(int const *print_array, int const size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("print_array[%zu] = %d\n", i, print_array[i]);
		i++;
	}
}
