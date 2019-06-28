/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 19:46:22 by ksharlen         ###   ########.fr       */
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
		g_spec.width > g_spec.accuracy)) && g_spec.flags & DOT)
	{
		g_spec.width -= g_spec.accuracy;
		g_spec.size_num = g_spec.accuracy;
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

static void		ft_push_wa(char *buf, char *inbuf)
{
	int sym;

	sym = ' ';
	if (g_spec.flags & DASH && g_spec.width)
	{
		ft_memcpy(buf + g_spec.size_write, inbuf, g_spec.size_num);
		ft_memset(buf + g_spec.size_num + g_spec.size_write, ' ', g_spec.width);
	}
	else
	{
		if (g_spec.flags & ZERO)
			sym = '0';
		ft_memset(buf + g_spec.size_write, sym, g_spec.width);
		ft_memcpy(buf + g_spec.width + g_spec.size_write, inbuf, g_spec.size_num);
	}
}

void			ft_str_to_str(char *buf, char *inbuf)
{
	g_spec.size_num = ft_strlen(inbuf);
	ft_work_aw();
	ft_push_wa(buf, inbuf);
	g_spec.size_write += g_spec.size_num + g_spec.width;
}