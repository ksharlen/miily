/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:57:51 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 13:57:57 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	byte_shift;
	void	*p_str;

	byte_shift = 0;
	while (byte_shift < n)
	{
		if (*((unsigned char *)s + byte_shift) == c)
		{
			p_str = ((unsigned char *)s + byte_shift);
			byte_shift = n;
		}
		else
			++byte_shift;
	}
	return (p_str);
}
