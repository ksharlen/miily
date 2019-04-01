#include "main.h"

int inc(int a);
void ft_putInt(int *tab, int length);

int	ft_test(int *tab, int length, int (*f)(int))
{
	int i;

	if (length < 1)
	{
		ft_putstr("error! length < 1");
		return (-1);
	}
	i = 0;
	while (i < length)
	{
		tab[i] = f(tab[i++]);
	}
	return (0);
}

int	main(void)
{
	int array[10] = { 2, 5, 4, 2, 5, 13, 15, 3, 2, 1 };

	ft_putInt(array, 10);
	ft_test(array, 10, inc);
	ft_putstr("after: \n");
	ft_putInt(array, 10);
	return (0);
}

int	inc(int a)
{
	a++;
	return (a);
}

void	ft_putInt(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
