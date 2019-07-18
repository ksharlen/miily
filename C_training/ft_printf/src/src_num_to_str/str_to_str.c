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

static wchar_t		*get_va_arg(va_list format)
{
	return (va_arg(format, wchar_t *));
}

static void			work_aw(void)
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

static void			push_wa(unsigned char *inbuf)
{
	unsigned char	sym;
	unsigned char	*buf;

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

	inbuf = get_va_arg(format);
	if (!inbuf)
	{
		utf_str = (unsigned char *)"(null)";
		work_aw();
		g_spec.size_num = ft_strlen((const char *)utf_str);
		push_wa(utf_str);
	}
	else
	{
		work_aw();
		utf_str = convert_utf8(inbuf);
		g_spec.size_num = ft_strlen((const char *)utf_str);
		push_wa(utf_str);
	}
}
