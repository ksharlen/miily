/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:36:03 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 17:24:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
