/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:44:00 by ksharlen          #+#    #+#             */
/*   Updated: 2019/02/28 16:43:53 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet < 122)
	{
		ft_putchar(alphabet++);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
