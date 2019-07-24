/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_to_str3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:40:44 by cormund           #+#    #+#             */
/*   Updated: 2019/07/24 16:15:13 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t			delete_zero(t_long *res, unsigned int *nbr, ssize_t i)
{
	ssize_t		size;

	if (g_spec.flags & HASH)
		return (0);
	// printf("i = %zd\n", i);
	// printf("res->len_tmp = %zd\n", res->len_tmp);
	size = (i < 0 ? i : 0);
	if (i <= 0 && !*nbr)
	{
		i = 1;
		--size;
	}
	while (i > 0 && (i + 1) < res->len_tmp && (nbr + i) != res->nbr_dot &&\
	(banker_rounding(nbr, i - 1, res->len_tmp) ? nbr[i] == 9 : !nbr[i]))
	{
		// printf("§");
		--size;
		++i;
	}
	printf("res->len_tmp - i = %zd\n e = %d\n", res->len_tmp - i, res->e);
	// if ((res->len_tmp - i) == res->len_int || (res->len_tmp - i) == 1)
	if ((nbr + i) == res->nbr_dot)
	{
		printf("1\n");
		res->nbr_dot = NULL;
	}
	// printf("acc = %d\n", g_spec.accuracy);
	printf("size = %zd\n", size);
	return (size);
}

static int		push_e(unsigned char *buf, t_long *res, ssize_t size_num)
{
	int			n;
	int			sign;

	sign = res->e;
	n = 0;
	while (res->e || n < 2)
	{
		buf[--size_num] = (CHECK_MOD(res->e) % 10) + '0';
		res->e /= 10;
		++n;
	}
	buf[--size_num] = (sign >= 0 ? '+' : '-');
	buf[--size_num] = g_spec.spec;
	return (n + 2);
}

void			push_double_to_str(unsigned char *buf, t_long *res,\
									size_t size_str, ssize_t size_num)
{
	size_str -= size_num;
	if ((g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC) &&\
		size_num--)
		*buf++ = chr_space_plus_dec();
	if (!(g_spec.flags & DASH) && g_spec.flags & ZERO)
		while (size_str--)
			*buf++ = '0';
	if (g_spec.spec == 'e' || g_spec.spec == 'E')
		size_num -= push_e(buf, res, size_num);
	while (res->len_int-- && (size_num-- > 0))
		*buf++ = res->nbr_tmp[--res->len_tmp] + '0';
	if (size_num-- > 0)
		*buf++ = '.';
	while (res->len_fract-- && (size_num-- > 0))
		*buf++ = res->nbr_tmp[--res->len_tmp] + '0';
	while (size_num-- > 0)
		*buf++ = '0';
}
