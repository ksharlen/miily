/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:11:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/30 15:13:01 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_l_format(const int next_symbal)
{
	int mod;
	int shift_size;

	shift_size = 0;
	mod = 0;
	if (next_symbal == 'l')
	{
		if (ft_check_the_entry(NUM_INT, g_spec.spec) || ft_check_the_entry(NUM_OTHER, g_spec.spec))
			mod = SPACE;
		shift_size = 2;
	}
	else
	{
		if (ft_check_the_entry(NUM_INT, g_spec.spec) ||
			ft_check_the_entry(NUM_STRING, g_spec.spec) ||
			ft_check_the_entry(NUM_OTHER, g_spec.spec))
			mod = DASH;
		shift_size = 1;
	}
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (shift_size);
}

int		ft_h_format(const int next_symbal)
{
	int mod;
	int shift_size;

	shift_size = 0;
	mod = 0;
	if (next_symbal == 'h')
	{
		if (ft_check_the_entry(NUM_INT, g_spec.spec) ||
			ft_check_the_entry(NUM_OTHER, g_spec.spec))
			mod = ZERO;
		shift_size = 2;
	}
	else
	{
		if (ft_check_the_entry(NUM_INT, g_spec.spec))
				mod = PLUS;
		shift_size = 1;
	}
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (shift_size);
}

int			ft_j_z_t_format(const int check_mod)
{
	int mod;

	mod = 0;
	if (ft_check_the_entry(NUM_INT, g_spec.spec))
	{
		if (check_mod == 'z')
			mod = DOT;
		else if (check_mod == 'j')
			mod = HASH;
		else if (check_mod == 't')
			mod = DEC;
	}
	if (mod > g_spec.mod)
		g_spec.mod = mod;
	return (1);
}

int			ft_big_l(const int check_mod)
{
	if (ft_check_the_entry(NUM_DOUBLE, g_spec.spec))
		g_spec.mod = DASH;
	return (1);
}