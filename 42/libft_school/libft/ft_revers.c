/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 10:36:55 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/18 13:32:33 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_revers(int n)
{
	short sign;
	int m;

	sign = 1;
	m = 0;
	if (n < 0)
	{
		n = n * (-1);
		sign = -1;
	}
	while (n)
	{
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return (m * sign);
}
