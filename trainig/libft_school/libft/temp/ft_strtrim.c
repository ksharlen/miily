/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 10:32:58 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/16 13:00:29 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	char		*ft_skip_space_begin(char const *str)
{
	char *p_str;

	p_str = (char *)str;
	if (p_str)
	{
		while (*p_str == '\t' || *p_str == '\n' || *p_str == ' ')
			p_str++;
		return (p_str);
	}
	else
		return (NULL);
}

static	void		ft_skip_space_end(char *str)
{
	int		len;

	if (str)
	{
		len = ft_strlen(str) - 1;
		while (str[len] == '\t' || str[len] == '\n' || str[len] == ' ')
		{
			--len;
		}
		str[len + 1] = '\0';
	}
}

char				*ft_strtrim(char const *s)
{
	char	*p_str;
	char	*p_dyn;
	int		len;

	p_str = NULL;
	if (s)
	{
		p_str = ft_skip_space_begin(s);
		ft_skip_space_end(p_str);
		len = ft_strlen(p_str);
//		p_dyn = ft_strnew(len);
		p_dyn = ft_strdup(p_str);
		if (p_dyn == NULL)
			return (NULL);
//		ft_strcpy(p_dyn, p_str);
	}
	else
		return (NULL);
	return (p_dyn);
}
