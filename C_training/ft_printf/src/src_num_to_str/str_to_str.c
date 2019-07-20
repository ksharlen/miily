/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/20 12:58:59 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				work_aw(void)
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

void				push_wa(unsigned char *inbuf)
{
	unsigned char	sym;

	sym = ' ';
	if (g_spec.flags & DASH && g_spec.width > 0)
	{
		memcpy_buf(inbuf, g_spec.size_num);
		memset_buf(sym, g_spec.width);
	}
	else
	{
		if (g_spec.flags & ZERO)
			sym = '0';
		memset_buf(sym, g_spec.width);
		memcpy_buf(inbuf, g_spec.size_num);
	}
}

void				str_to_str(va_list format)
{
	wchar_t			*inbuf;
	unsigned char	*utf_str;

	if ((g_spec.spec == 'S') || (g_spec.spec == 's' && g_spec.mod & DASH))
	{
		inbuf = va_arg(format, wchar_t *);
		utf_str = convert_utf8(inbuf);
	}
	else
		utf_str = va_arg(format, unsigned char *);
	if (!utf_str)
		utf_str = (unsigned char *)"(null)";
	work_aw();
	g_spec.size_num = ft_strlen((const char *)utf_str);
	push_wa(utf_str);
	if ((g_spec.spec == 'S') || (g_spec.spec == 's' && g_spec.mod & DASH))
		ft_ustrdel(&utf_str);
}
