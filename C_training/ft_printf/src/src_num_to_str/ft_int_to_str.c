/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/06/27 09:28:30 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			ft_chr_space_plus_dec()
{
	if (g_spec.flags & DEC)
		return ('-');
	if (g_spec.flags & PLUS)
		return ('+');
	return (' ');
}

static size_t		ft_size_num(long long int num)
{
	size_t			l;
	long long int	num_cp;

	num_cp = num;
	l = g_spec.flags & DOT && g_spec.accuracy == 0 && num == 0 ? 0 : 1;
	while (num_cp /= 10)
		++l;
		// num /= 10;
	g_spec.flags & DOT && g_spec.accuracy > l ? l = g_spec.accuracy : 0;
	g_spec.flags & SPACE || g_spec.flags & PLUS || num < 0 ? ++l : 0;
	num < 0 ? g_spec.flags ^= DEC : 0;
	g_spec.flags & ZERO && g_spec.width > l && !(g_spec.flags & DOT) ?\
	l = g_spec.width : 0;
	return (l);
}

char			*ft_int_to_str(long long int num)
{
	char 		*str;
	char		*str_cp;
	size_t		size_num;
	short		sign;
	size_t		size_str;

	sign = (num < 0 ? -1 : 1);
	size_num = ft_size_num(num);
	g_spec.size_num = size_num;
	size_str = (size_num < g_spec.width ? g_spec.width : size_num);
	str = ft_strnew(size_str);
	if (!(str_cp = str))
		return (NULL);
	if (g_spec.width > size_num)
		str_cp = ft_size_work(str);
	while (size_num--)
	{
		str_cp[size_num] = num % 10 * sign + '0';
		num /= 10;
	}
	if (g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC)
		str_cp[0] = ft_chr_space_plus_dec();
	g_spec.size_num = size_str;
	return (str);
}
