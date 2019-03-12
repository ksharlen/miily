/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 17:02:54 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/11 13:25:32 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strlowcase(char *str)
{
	char *p_str;

	p_str = str;
	while (*str)
	{
		if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
			if (*str > 64 && *str < 91)
				*str += 32;
		str++;
	}
	return (p_str);
}

char	*ft_strupcase(char *str)
{
	char *p_str;

	p_str = str;
	while (*str != '\0')
	{
		if ((*str > 64 && *str < 90) || ((*str > 96) && (*str < 123)))
			if ((*str > 96) && (*str < 123))
				*str = *str - 32;
		str++;
	}
	return (p_str);
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
