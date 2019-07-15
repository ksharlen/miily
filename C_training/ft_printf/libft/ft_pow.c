/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 10:18:52 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/10 11:53:25 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_pow(int number, int level)
{
	ssize_t	res;

	res = 1;
	while (level)
	{
		if (level & 1)
    		res *= number;
		number *= number;
		level >>= 1;
	}
	return (res);
}
