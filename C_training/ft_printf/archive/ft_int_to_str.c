/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/06/18 17:09:35 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size_num(long long int num)
{
	size_t		l;

	// l = num == 0 ? 0 : 1;
	l = g_spec.flags & DOT && g_spec.accuracy == 0 && num == 0 ? 0 : 1;
	while (num /= 10)
		++l;
		// num /= 10;
	g_spec.size_num = l;
	return (l);
}

//g_spec.flags |= DEC;

char			*int_to_str(long long int num)
{
	char 		*all_str;
	size_t		size_num;
	short		sign;

	sign = 1;
	size_num = ft_size_num(num);
	if (!(all_str = (char *)ft_memalloc(size_num + 1)))
		return (NULL);
	all_str[size_num] = '\0';
	if (num < 0)
	{
		g_spec.flags |= DEC;
		sign = -1;
	}
	while (size_num--)
	{
		all_str[size_num] = num % 10 * sign + '0';
		num /= 10;
	}
	return (all_str);
}
