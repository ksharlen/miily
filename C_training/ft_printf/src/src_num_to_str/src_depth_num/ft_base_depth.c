/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_depth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:28:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/13 11:18:01 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t			ft_base_depth(unsigned long long int num, int base)
{
	size_t		depth;

	depth = 1;
	while (num /= base)
		++depth;
	return (depth);
}
