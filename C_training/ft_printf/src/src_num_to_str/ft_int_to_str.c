/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/07/03 12:19:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			ft_chr_space_plus_dec(void)
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
	g_spec.flags & DOT && g_spec.accuracy > l ? l = g_spec.accuracy : 0;
	g_spec.flags & SPACE || g_spec.flags & PLUS || num < 0 ? ++l : 0;
	num < 0 ? g_spec.flags |= DEC : 0;
	g_spec.flags & ZERO && g_spec.width > l && !(g_spec.flags & DOT) ?\
	l = g_spec.width : 0;
	return (l);
}

static void			push_num_to_str(char *buf,
long long int num, size_t size_str)
{
	short	sign;
	size_t	size_num;

	size_num = ft_size_num(num);
	sign = ((num < 0) ? -1 : 1);
	while (size_num--)
	{
		buf[size_num] = num % 10 * sign + '0';
		num /= 10;
		g_spec.size_write++;
		g_spec.size_buf--;
	}
	if (g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC)
		buf[0] = ft_chr_space_plus_dec();
}

static void			write_and_free_malloc(char *buf, size_t size_str)
{
	ft_write_buf_and_clean(WRITE_BUF);
	g_spec.ret_printf += write(1, buf, size_str);
	ft_strdel(&buf);
}

void				ft_int_to_str(long long int num)
{
	size_t		size_num;
	size_t		size_str;
	char		*buf;

	size_num = ft_size_num(num);
	size_str = (size_num < g_spec.width ? g_spec.width : size_num);
	if (g_spec.size_buf < size_str && SIZE_BUF >= size_str)
	{
		ft_write_buf_and_clean(WRITE_BUF);
		buf = ft_work_buf(GET_POINT, 0);
	}
	else if (SIZE_BUF < size_str)
	{
		buf = ft_memalloc(size_str);
		if (!buf)
			exit(0);
	}
	else
		buf = ft_work_buf(GET_POINT, 0);
	push_num_to_str(g_spec.width > size_num ?
		ft_size_work(buf, size_num) : buf, num, size_str);
	if (SIZE_BUF < size_str)
		write_and_free_malloc(buf, size_str);
}
