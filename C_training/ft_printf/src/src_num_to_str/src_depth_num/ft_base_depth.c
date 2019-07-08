/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_depth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:28:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/08 08:35:52 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t					ft_base_depth(unsigned long long int num, int base)
{
	size_t				depth;
	unsigned long long	num_cp;

	num_cp = num;
	depth = 1;
	while (num_cp /= base)
		++depth;
	if (g_spec.flags & HASH && num &&
	base != 16 && g_spec.flags & DOT && g_spec.accuracy <= depth)
		++depth;
	if (g_spec.flags & DOT && g_spec.accuracy > depth)
		depth = g_spec.accuracy;
	if (g_spec.flags & HASH && num && base == 16)
		depth += 2;
	depth = g_spec.flags & ZERO && !(g_spec.flags & DOT) &&
	!(g_spec.flags & DASH) && g_spec.width > depth ? g_spec.width : depth;
	depth = g_spec.flags & DOT && !g_spec.accuracy && !num ? 0 : depth;
	g_spec.flags & HASH && base == 8 &&
	!num && g_spec.flags & DOT && !g_spec.accuracy ? ++depth : 0;
	return (depth);
}
