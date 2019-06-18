/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_depth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:28:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/18 15:47:46 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_base_depth(unsigned long long int num, int base)
{
	size_t		depth;

	depth = 1;
	if (((g_spec.flags & HASH) || g_spec.spec == 'p') && num)
		depth += (base == 16 ? 2 : 1);
	while (num /= base)
		++depth;
	g_spec.size_num = depth;
}
