/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:52:40 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/21 10:23:52 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size_num(int a)
{
	size_t len;

	len = 0;
	if (a == 0)
		len = 1;
	while (a)
	{
		++len;
		a /= 10;
	}
	return (len);
}
