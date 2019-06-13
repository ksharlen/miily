/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_depth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:28:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/11 08:31:51 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t			ft_base_depth(long long int num, int base)
{
	size_t		depth;

	depth = 1;
	while (num /= base)
		++depth;
	return (depth);
}
