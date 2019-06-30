/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/30 11:33:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void       ft_work_aw(void)
{
	if (g_spec.size_num  <= g_spec.accuracy && g_spec.accuracy <
	g_spec.width || (g_spec.width > g_spec.size_num && g_spec.accuracy >=
	g_spec.width))
		g_spec.width -= g_spec.size_num;
	else if ((g_spec.width >= g_spec.size_num && g_spec.size_num >
		g_spec.accuracy || (g_spec.size_num >= g_spec.width &&
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
	int sym;
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
		ft_memset(buf, sym, g_spec.width);
		g_spec.size_write += g_spec.width;
		g_spec.size_buf -= g_spec.width;
		ft_work_buf(inbuf, g_spec.size_num);
	}
}

void			ft_str_to_str(char *inbuf)
{
	if (inbuf)
	{
		g_spec.size_num = ft_strlen(inbuf);
		ft_work_aw();
		ft_push_wa(inbuf);
	}
}