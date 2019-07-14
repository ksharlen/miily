/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 12:07:07 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_get_va_arg(va_list format)
{
	return ((char)va_arg(format, int));
}

static void	ft_push_buf_sa(char sym)
{
	char	*buf;

	buf = work_buf(&sym, 1);
	memset_buf(' ', g_spec.width);
	// ft_memset(buf, ' ', g_spec.width - 1);
	// g_spec.size_write += (g_spec.width - 1);
	// g_spec.size_buf -= (g_spec.width - 1);
}

static void	ft_push_buf_as(char sym)
{
	char	*buf;
	char	for_zero;

	for_zero = ' ';
	if (g_spec.flags & ZERO)
		for_zero = '0';
	buf = work_buf(GET_POINT, 0);
	memset_buf(for_zero, g_spec.width);
	// ft_memset(buf, for_zero, g_spec.width - 1);
	// g_spec.size_write += (g_spec.width - 1);
	// g_spec.size_buf -= (g_spec.width - 1);
	work_buf(&sym, 1);
}

static void	ft_push_buf(char sym)
{
	if (g_spec.width > 1)
	{
		g_spec.width -= 1;
		if (g_spec.flags & DASH)
			ft_push_buf_sa(sym);
		else
			ft_push_buf_as(sym);
	}
	else
		work_buf(&sym, 1);
}

void		char_to_str(va_list format)
{
	char	sym;

	sym = ft_get_va_arg(format);
	ft_push_buf(sym);
}
