/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/06/14 11:37:40 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size_num(long long int num)
{
	size_t		l;

	l = num > 0 ? 0 : 1;
	l = g_spec.accuracy == 0 && num == 0 ? 0 : l;
	while (num)
	{
		l++;
		num /= 10;
	}
	return (l);
}

char			*ft_int_to_str(long long int num)
{
	char 		*all_str;
	size_t		size_num;
	short		sign;

	sign = 1;
	size_num = ft_size_num(num);
	g_spec.size_write += size_num;
	g_spec.size_num = size_num;
	if (!(all_str = (char *)ft_memalloc(size_num + 1)))
		return (NULL);
	all_str[size_num] = '\0';
	if (num < 0)
	{
		*all_str = '-';
		sign = -1;
	}
	!num ? *all_str = '0' : 0;
	while (num)
	{
		all_str[--size_num] = num % 10 * sign + '0';
		num /= 10;
	}
	//printf("all_str = %s\n", all_str);
	return (all_str);
}
