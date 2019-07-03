/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/07/03 08:25:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*ft_size_work(char *str)
{
	if (g_spec.flags & DASH)
	{
		ft_memset(str + g_spec.size_num, ' ', g_spec.width - g_spec.size_num);
	}
	else
	{
		ft_memset(str, ' ', g_spec.width - g_spec.size_num);
		str += g_spec.width - g_spec.size_num;
	}
	g_spec.size_write += g_spec.width - g_spec.size_num;
	g_spec.size_buf -= g_spec.width - g_spec.size_num;
	return (str);
}

static void					ft_work_base(unsigned long long num, int base)
{
	char				*buf;
	char				*str_cp;
	size_t				size_num;
	unsigned long long	cp_num;
	size_t				size_str;

	cp_num = num;
	size_num = ft_base_depth(num, base);
	size_str = g_spec.width > size_num ? g_spec.width : size_num;
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
	str_cp = buf;
	if (g_spec.width > size_num)
		str_cp = ft_size_work(buf);
	while (size_num--)
	{
		str_cp[size_num] = (num % base > 9 ? num % base + g_spec.spec - 33 : num % base + '0');
		num /= base;
		g_spec.size_write++;
		g_spec.size_buf--;
	}
	if (g_spec.flags & HASH && cp_num && (g_spec.spec == 'x' || g_spec.spec == 'X'))
		str_cp[1] = g_spec.spec;
	if (g_spec.flags & HASH && cp_num && (g_spec.spec == 'b' || g_spec.spec == 'B'))
		str_cp[0] = g_spec.spec;
	if (SIZE_BUF < size_str)
	{
		ft_write_buf_and_clean(WRITE_BUF);
		g_spec.ret_printf += write(1, buf, size_str);
		ft_strdel(&buf);
	}
}

void			ft_base_to_str(unsigned long long int num)
{
	int base;

	base = 0;
	if (g_spec.spec == 'x' || g_spec.spec == 'X')
		base = HEX;
	else if (g_spec.spec == 'o' || g_spec.spec == 'O')
		base = OCT;
	else if (g_spec.spec == 'b' || g_spec.spec == 'B')
		base = BIN;
	else if (g_spec.spec == 'p')
	{
		g_spec.flags |= HASH;
		g_spec.spec = 'x';
		base = HEX;
	}
	ft_work_base(num, base);
}
