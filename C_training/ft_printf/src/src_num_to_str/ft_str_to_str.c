/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/02 12:19:22 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_get_va_arg(va_list format)
{
	return (va_arg(format, char *));
}

static void       ft_work_aw(void)
{
	if ((g_spec.size_num  <= g_spec.accuracy && g_spec.accuracy <
	g_spec.width ) || (g_spec.width > g_spec.size_num && g_spec.accuracy >=
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

static void		ft_push_wa(char *inbuf)
{
	int 		sym;
	char		*buf;

	sym = ' ';
	if (g_spec.flags & DASH && g_spec.width > 0)
	{
		buf = ft_work_buf(inbuf, g_spec.size_num);
		ft_memset(buf, ' ', g_spec.width);
		g_spec.size_write += g_spec.width;
		g_spec.size_buf -= g_spec.width;
	}
	else
	{
		buf = ft_work_buf(GET_POINT, 0);
		if (g_spec.flags & ZERO)
			sym = '0';
		ft_memset(buf, sym, g_spec.width);//!переполнение буфера подумать
		g_spec.size_write += g_spec.width;
		g_spec.size_buf -= g_spec.width;
		ft_work_buf(inbuf, g_spec.size_num);
	}
}

void			ft_str_to_str(va_list format)
{
	char *inbuf;

	inbuf = ft_get_va_arg(format);
	if (inbuf)
	{
		g_spec.size_num = ft_strlen(inbuf);
		ft_work_aw();
		ft_push_wa(inbuf);
	}
}
