#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		nb = -1 * nb;
		nb = nb - 1932735284;
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -1 * nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		main(void)
{
	int a;

	a = 23;
	ft_putnbr(a);
	printf("%c", a);
	return (0);
}
