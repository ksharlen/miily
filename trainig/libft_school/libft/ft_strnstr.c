/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:04:35 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 14:33:39 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*p_str;
	size_t		temp;

	if (!*little)
		return (NULL);
	i = 0;
	p_str = (char *)big;
	while (big[i] != '\0')
	{
		j = 0;
		temp = len;
		while ((big[i + j] == little[j]) && --temp)
			j++;
		if (!temp)
		{
			p_str = (char *)&big[i];
			break ;
		}
		i++;
	}
	return (p_str);
}
