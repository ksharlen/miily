/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/07/21 10:31:25 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						base_depth(unsigned long long int num, int base)
{
	int					depth;
	unsigned long long	num_cp;

	num_cp = num;
	depth = 1;
	while (num_cp /= base)
		++depth;
	if (g_spec.flags & HASH && num &&
	base != 16 && g_spec.flags & DOT && g_spec.accuracy <= depth)
		++depth;
	if (g_spec.flags & DOT && g_spec.accuracy > depth)
		depth = g_spec.accuracy;
	if (g_spec.flags & HASH && num && base == 16)
		depth += 2;
	depth = g_spec.flags & ZERO && !(g_spec.flags & DOT) &&
	!(g_spec.flags & DASH) && g_spec.width > depth ? g_spec.width : depth;
	depth = g_spec.flags & DOT && !g_spec.accuracy && !num ? 0 : depth;
	g_spec.flags & HASH && base == 8 &&
	!num && g_spec.flags & DOT && !g_spec.accuracy ? ++depth : 0;
	return (depth);
}

static void				push_num_to_str(unsigned char *buf,
unsigned long long int num, int base)
{
	int					cp_num;
	size_t				size_num;

	size_num = base_depth(num, base);
	cp_num = num;
	while (size_num--)
	{
		buf[size_num] = (num % base > 9 ? num %
		base + g_spec.spec - 33 : num % base + '0');
		num /= base;
	}
	if (g_spec.flags & HASH && cp_num &&
	(g_spec.spec == 'x' || g_spec.spec == 'X'))
		buf[1] = g_spec.spec;
	if (g_spec.flags & HASH && cp_num &&
	(g_spec.spec == 'b' || g_spec.spec == 'B'))
		buf[0] = g_spec.spec;
}

void					write_and_free_malloc(unsigned char *buf,
size_t size_str)
{
	write_buf_and_clean(WRITE_BUF);
	g_spec.ret_printf += write(g_spec.fd, buf, size_str);
	ft_ustrdel(&buf);
}

static void				ft_work_base(unsigned long long num, int base)
{
	unsigned char		*buf;
	int					size_num;
	size_t				size_str;

	size_num = base_depth(num, base);
	size_str = g_spec.width > size_num ? g_spec.width : size_num;
	buf = check_buf(size_str);
	push_num_to_str(g_spec.width > size_num ?\
		size_work(buf, size_num) : buf, num, base);
	if (SIZE_BUF < size_str)
		write_and_free_malloc(buf, size_str);
}

void					base_to_str(unsigned long long int num)
{
	int					base;

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
