/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/07/14 14:02:56 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*size_work(char *str, size_t size_num)
{
	if (g_spec.flags & DASH)
		ft_memset(str + size_num, ' ', g_spec.width - size_num);
	else
	{
		ft_memset(str, ' ', g_spec.width - size_num);
		str += g_spec.width - size_num;
	}
	g_spec.size_write += g_spec.width - size_num;
	g_spec.size_buf -= g_spec.width - size_num;
	return (str);
}

static void		push_num_to_str(char *buf,
unsigned long long int num, size_t size_str, int base)
{
	int						cp_num;
	size_t					size_num;

	size_num = base_depth(num, base);
	cp_num = num;
	while (size_num--)
	{
		buf[size_num] = (num % base > 9 ? num %
		base + g_spec.spec - 33 : num % base + '0');
		num /= base;
		g_spec.size_write++;
		g_spec.size_buf--;
	}
	if (g_spec.flags & HASH && cp_num &&
	(g_spec.spec == 'x' || g_spec.spec == 'X'))
		buf[1] = g_spec.spec;
	if (g_spec.flags & HASH && cp_num &&
	(g_spec.spec == 'b' || g_spec.spec == 'B'))
		buf[0] = g_spec.spec;
}

void		write_and_free_malloc(char *buf, size_t size_str)
{
	g_spec.size_write -= size_str;
	g_spec.size_buf += size_str;
	write_buf_and_clean(WRITE_BUF);
	g_spec.ret_printf += write(g_spec.fd, buf, size_str);
	ft_strdel(&buf);
}

static void		ft_work_base(unsigned long long num, int base)
{
	char		*buf;
	size_t		size_num;
	size_t		size_str;

	size_num = base_depth(num, base);
	size_str = g_spec.width > size_num ? g_spec.width : size_num;
	if (g_spec.size_buf < size_str && SIZE_BUF >= size_str)
	{
		write_buf_and_clean(WRITE_BUF);
		buf = work_buf(GET_POINT, 0);
	}
	else if (SIZE_BUF < size_str)
	{
		buf = ft_memalloc(size_str);
		if (!buf)
			exit(0);
	}
	else
		buf = work_buf(GET_POINT, 0);
	push_num_to_str(g_spec.width > size_num ?\
		size_work(buf, size_num) : buf, num, size_str, base);
	if (SIZE_BUF < size_str)
		write_and_free_malloc(buf, size_str);
}

void			base_to_str(unsigned long long int num)
{
	int			base;

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
