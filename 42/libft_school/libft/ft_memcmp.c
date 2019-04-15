/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:58:05 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 15:02:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i) && i++ < n)
		;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
