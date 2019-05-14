/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:46:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/14 17:57:48 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_memnlen(const void *s, int n, size_t size)
{
	size_t len;
	size_t i;

	i = 0;
	len = 0;
	if (s)
	{
		while (i < size)
		{
			if (((unsigned char *)s)[i] == n)
				return (len);
			++len;
			++i;
		}
	}
	return (len);
}