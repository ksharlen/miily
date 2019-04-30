/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 09:58:13 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/16 12:16:08 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p_dyn;
	size_t	i;

	p_dyn = NULL;
	if (s)
	{
		i = 0;
		p_dyn = ft_strnew(len);
		if (!p_dyn)
			return (NULL);
		bzero(p_dyn, len);
		while (i < len)
		{
			p_dyn[i] = s[start];
			i++;
			start++;
		}
	}
	return (p_dyn);
}
