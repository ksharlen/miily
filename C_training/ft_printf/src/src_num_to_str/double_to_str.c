/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 15:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/14 14:02:56 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*size_work_for_long(char *str, size_t size_num)
{
	if (g_spec.flags & DASH)
		ft_memset(str + size_num, ' ', g_spec.width - size_num);
	else if (!(g_spec.flags & ZERO))
	{
		ft_memset(str, ' ', g_spec.width - size_num);
		str += g_spec.width - size_num;
	}
	return (str);
}

static void			nan_infinity(t_uni *real_num)
{
	char			*inbuf;

	if (g_spec.flags & DOT)
		(g_spec.flags ^= DOT);
	if (g_spec.flags & ZERO)
		(g_spec.flags ^= ZERO);
	if (real_num->bits.mantissa << 1)
		inbuf = (g_spec.spec > 96 ? "nan" : "NAN");
	else if (g_spec.flags & DEC)
		inbuf = (g_spec.spec > 96 ? "-inf" : "-INF");
	else if (g_spec.flags & PLUS)
		inbuf = (g_spec.spec > 96 ? "+inf" : "+INF");
	else if (g_spec.flags & SPACE)
		inbuf = (g_spec.spec > 96 ? " inf" : " INF");
	else
		inbuf = (g_spec.spec > 96 ? "inf" : "INF");
	g_spec.size_num = ft_strlen(inbuf);
	ft_work_aw();
	ft_push_wa(inbuf);
}

static long double	pull_double_arg(va_list format)
{
	long double		ret;

	ret = 0.0;
	if (g_spec.mod == DASH)
		ret = va_arg(format, long double);
	else
		ret = va_arg(format, double);
	return (ret);
}

void				double_to_str(va_list format)
{
	t_uni			real_num;
	t_long			res;
	char			*buf;
	size_t			size_num;
	size_t			size_str;

	real_num.num = pull_double_arg(format);
	real_num.bits.exp -= 16383;
	if (real_num.bits.sign)
		g_spec.flags |= DEC;
	if (real_num.bits.exp != -16384)
	{
		malloc_long(&real_num, &res);
		long_arithmetic(real_num, &res);
		size_num = size_num_for_long(&res);
		size_str = g_spec.width > size_num ? g_spec.width : size_num;
		buf = check_buf(size_str);
		push_double_to_str(g_spec.width > size_num ?\
			size_work_for_long(buf, size_num) : buf, &res, size_str, size_num);
		if (SIZE_BUF < size_str)
			write_and_free_malloc(buf, size_str);
		free(res.nbr_tmp);
	}
	else
		nan_infinity(&real_num);
}
