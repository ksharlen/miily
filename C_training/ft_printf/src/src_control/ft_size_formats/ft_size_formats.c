/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:11:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 17:14:35 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_l_format(const char *format)
{
	int mod;
	int shift_size;

	shift_size = 0;
	mod = 0;
	if (*(format + 1) == 'l')
	{
		mod = SPACE;
		shift_size = 2;
	}
	else
	{
		mod = DASH;
		shift_size = 1;
	}
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (shift_size);
}

int		ft_h_format(const char *format)
{
	int mod;
	int shift_size;

	shift_size = 0;
	mod = 0;
	if (*(format + 1) == 'h')
	{
		mod = SPACE;
		shift_size = 2;
	}
	else
	{
		mod = DASH;
		shift_size = 1;
	}
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (shift_size);
}

int			ft_j_z_l_t_format(const char *format)
{
	int mod;

	mod = 0;
	if (*format == 'z')
		mod = DOT;
	else if (*format == 'j')
		mod = HASH;
	else if (*format == 'L')
		mod = DASH;
	else if (*format == 't')
		mod = DEC;
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (1);
}
