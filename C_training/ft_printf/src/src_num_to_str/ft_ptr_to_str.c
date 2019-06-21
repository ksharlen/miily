/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 17:44:09 by cormund           #+#    #+#             */
/*   Updated: 2019/06/21 18:02:46 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ptr_to_str(unsigned long long ptr)
{
	g_spec.spec = 'x';
	g_spec.flags |= HASH;
	return (ft_base_to_str(ptr, 16));
}