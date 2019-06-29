/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/29 10:58:39 by ksharlen         ###   ########.fr       */
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

static void		ft_push_wa(char *inbuf)
{
	int sym;
	char		*buf;

	sym = ' ';
	buf = ft_work_buf(GET_POINT, 0);
	if (g_spec.flags & DASH && g_spec.width)
	{
		buf = ft_work_buf(inbuf, g_spec.size_num);
		//ft_memcpy(buf + g_spec.size_write, inbuf, g_spec.size_num);
		ft_memset(buf, ' ', g_spec.width);//?Попробовать закинуть в одну строку
		g_spec.size_write += g_spec.width;
	}
	else
	{
		if (g_spec.flags & ZERO)
			sym = '0';
		ft_memset(buf, sym, g_spec.width);
		g_spec.size_write += g_spec.width;
		ft_work_buf(inbuf, g_spec.size_num);
		//ft_memcpy(buf + g_spec.width + g_spec.size_write, inbuf, g_spec.size_num);
	}
}

void			ft_str_to_str(char *inbuf)
{
	g_spec.size_num = ft_strlen(inbuf);
	ft_work_aw();
	ft_push_wa(inbuf);
	//g_spec.size_write += g_spec.size_num + g_spec.width;
}