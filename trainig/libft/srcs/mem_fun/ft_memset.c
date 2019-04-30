/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:30:30 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/07 14:23:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem_header.h"

void	*ft_memset(void *buf, int value, size_t num)
{
	size_t	byte_shift;
	
	byte_shift = 0;
	while (byte_shift < num)
		*((unsigned char *)buf + byte_shift++) = (int)value;
	return (buf);
}
