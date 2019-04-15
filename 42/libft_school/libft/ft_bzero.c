/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:23:15 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 13:46:21 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t byte_shift;
	size_t zero;

	zero = 0;
	byte_shift = 0;
	while (byte_shift < n)
		*((unsigned char *)s + byte_shift++) = zero;
}
