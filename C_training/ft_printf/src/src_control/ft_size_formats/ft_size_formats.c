/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:11:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 14:53:25 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_l_format(const char *format)
{
		if ((*(++format) == 'l'))
		{
				g_spec.shift_spec += 2;
				g_spec.size_type = "ll";
		}
		else
		{
			g_spec.shift_spec += 1;
			g_spec.size_type = "l";
		}
}

void		ft_h_format(const char *format)
{
		if ((*(++format) == 'h'))
		{
				g_spec.shift_spec += 2;
				g_spec.size_type = "hh";
		}
		else
		{
			g_spec.shift_spec += 1;
			g_spec.size_type = "h";
		}
}

void		ft_j_format(const char *format)
{
	g_spec.shift_spec += 1;
	g_spec.size_type = "j";
}

void		ft_z_format(const char *format)
{
	g_spec.shift_spec += 1;
	g_spec.size_type = "z";
}

void		ft_l_big_format(const char *format)
{
	g_spec.shift_spec += 1;
	g_spec.size_type = "L";
}