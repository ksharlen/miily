/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 10:18:52 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/23 11:35:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int number, int level)
{
	int sum;

	if (level == 0)
		return (1);
	else if (number == 1)
		return (1);
	else if (number == 0)
		return (0);
	sum = 1;
	while (level--)
		sum *= number;
	return (sum);
}
