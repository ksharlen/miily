/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 09:24:22 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 10:33:56 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *p_tab;

	i = 0;
	p_tab = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		p_tab[i] = tab[i];
		p_tab[i] = f(p_tab[i]);
		i++;
	}
	return (p_tab);
}
