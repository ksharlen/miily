/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 15:43:14 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void        ft_work_aw(void)
{
	//? Ш > Т >= S_N
	if (g_spec.size_num  <= g_spec.accuracy && g_spec.accuracy <
	g_spec.width || (g_spec.width > g_spec.size_num && g_spec.accuracy >=
	g_spec.width))
		g_spec.width -= g_spec.size_num;
	//? Ш >= S_N > Т
	else if ((g_spec.width >= g_spec.size_num && g_spec.size_num >
		g_spec.accuracy || (g_spec.size_num >= g_spec.width &&
		g_spec.width > g_spec.accuracy)) && g_spec.flags & DOT)
	{
		//printf("test\n");
		g_spec.width -= g_spec.accuracy;
		g_spec.size_num = g_spec.accuracy;
		//if (!g_spec.accuracy)
		//	g_spec.width = 0;
	}
	//? Т >= S_N >= Ш
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

static void ft_push_wa(char *buf, char *inbuf)
{
	int sym;

	sym = ' ';
	if (g_spec.flags & DASH && g_spec.width)
	{
		ft_memcpy(buf + g_spec.size_write, inbuf, g_spec.size_num);
		//ft_strncat(buf + g_spec.size_write, inbuf, g_spec.size_num);
		ft_memset(buf + g_spec.size_num + g_spec.size_write, ' ', g_spec.width);
	}
	else
	{
		if (g_spec.flags & ZERO)
			sym = '0';
		//printf("here\n");
		//printf("width = %d\n", g_spec.width);
		ft_memset(buf + g_spec.size_write, sym, g_spec.width);
		//ft_strncat(buf, inbuf, g_spec.size_num);
		ft_memcpy(buf + g_spec.width + g_spec.size_write, inbuf, g_spec.size_num);
	}
}

void        ft_str_to_str(char *buf, char *inbuf)
{
	//printf("buf:\n%s\n", buf);
	//printf("spec = %c\n", g_spec.spec);
	//printf("inbuf = %s\n", inbuf);
	if (inbuf)
		g_spec.size_num = ft_strlen(inbuf);
	ft_work_aw();
	ft_push_wa(buf, inbuf);
	g_spec.size_write += g_spec.size_num + g_spec.width;
	// ft_print_test(NULL);
	// printf("buf:\n%s", buf);
	// printf("\n==========\n");
}