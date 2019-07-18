/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 12:08:34 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static wchar_t		*ft_get_va_arg(va_list format)
{
	return (va_arg(format, wchar_t *));
}

static void			ft_work_aw(void)
{
	if ((g_spec.size_num <= g_spec.accuracy && g_spec.accuracy <
	g_spec.width) || (g_spec.width > g_spec.size_num && g_spec.accuracy >=
	g_spec.width))
		g_spec.width -= g_spec.size_num;
	else if (((g_spec.width >= g_spec.size_num && g_spec.size_num >
		g_spec.accuracy) || (g_spec.size_num >= g_spec.width &&
		g_spec.width > g_spec.accuracy)))
	{
		if (g_spec.flags & DOT)
		{
			g_spec.width -= g_spec.accuracy;
			g_spec.size_num = g_spec.accuracy;
		}
		else
			g_spec.width -= g_spec.size_num;
	}
	else if (g_spec.accuracy >= g_spec.size_num &&
		g_spec.size_num >= g_spec.width)
		g_spec.width = 0;
	else if (g_spec.size_num > g_spec.accuracy &&
		g_spec.accuracy >= g_spec.width && g_spec.flags & DOT)
	{
		g_spec.width = 0;
		g_spec.size_num = g_spec.accuracy;
	}
}

static void			ft_push_wa(unsigned char *inbuf)
{
	unsigned char	sym;
	unsigned char	*buf;

	sym = ' ';
	if (g_spec.flags & DASH && g_spec.width > 0)
	{
		buf = work_buf(inbuf, g_spec.size_num);
		memset_buf(sym, g_spec.width);
	}
	else
	{
		buf = work_buf(GET_POINT, 0);
		if (g_spec.flags & ZERO)
			sym = '0';
		memset_buf(sym, g_spec.width);
		work_buf(inbuf, g_spec.size_num);
	}
}

void				str_to_str(va_list format)
{
	wchar_t			*inbuf;

	inbuf = ft_get_va_arg(format);
	if (!inbuf)
		inbuf = "(null)";
	//ф-ия для преобразования целой строк для utf-8
	g_spec.size_num = ft_strlen(inbuf);
	ft_work_aw();
	ft_push_wa(inbuf);
}
