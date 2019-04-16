/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:01:21 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/16 15:31:40 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p_res;
	size_t	size;

	size = strlen(s);
	if (!(p_res = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(p_res, s, size);
	ft_strcpy(p_res, s);
	return (p_res);
}
