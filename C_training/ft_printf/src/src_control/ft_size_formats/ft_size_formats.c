/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:11:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/12 20:45:34 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_l_format(const char *format)
{
	if (!(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1))))
	{
		if ((*(++format) == 'l') && (!(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1)))) && *(format + 1) != 'f')
		{
			if (ft_strchr(TYPE, *(++format)))
			{
				g_spec.mod = *format;
				g_spec.shift_spec += 3;
				//printf("g_spec.shift_spec = %ld\n", g_spec.shift_spec);
				g_spec.size_type = "ll";
				return (1);
			}
		}
		else if (ft_strchr(TYPE, *format))
		{
			g_spec.shift_spec += 2;
			g_spec.mod = *format;
			g_spec.size_type = "l";
			return (1);
		}
	}
	return (0);
}

int			ft_h_format(const char *format)
{
	if (!(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1)))) //? mb fk delete?
	{
		if ((*(++format) == 'h') && (!(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1)))))  //? need to think
		{
			if (ft_strchr(TYPE, *(++format)))
			{
				g_spec.mod = *format;
				g_spec.shift_spec += 3;
				g_spec.size_type = "hh";
				return (1);
			}
		}
		else if (ft_strchr(TYPE, *format))
		{
			g_spec.shift_spec += 2;
			g_spec.mod = *format;
			g_spec.size_type = "h";
			return (1);
		}
	}
	return (0);
}

int			ft_j_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
	{
		g_spec.mod = *format;
		g_spec.shift_spec += 1;
		g_spec.size_type = "j";
		return (1);
	}
	return (0);
}

int			ft_z_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
	{
		g_spec.mod = *format;
		g_spec.shift_spec += 1;
		g_spec.size_type = "z";
		return (1);
	}
	return (0);
}

int			ft_l_big_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
	{
		g_spec.mod = *format;
		g_spec.shift_spec += 1;
		g_spec.size_type = "L";
		return (1);
	}
	return (0);
}