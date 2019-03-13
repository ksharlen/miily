/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 11:14:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 13:00:41 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_os_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		while (i < length)
		{
			if (i == (length - 1))
				return (1);
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	if (f(tab[i], tab[i + 1]) > 0)
		while (i < length)
		{
			if (i == (length - 1))
				return (1);
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	return (0);
}
