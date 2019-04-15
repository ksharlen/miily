/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:05:02 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 14:39:11 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	char		*p_str;

	i = 0;
	p_str = (char *)haystack;
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
		{
			p_str = (char *)&haystack[i];
			break ;
		}
		else
			p_str = NULL;
		i++;
	}
	return (p_str);
}
