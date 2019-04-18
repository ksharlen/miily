/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 07:22:29 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/17 15:45:05 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_strnlen(const char *str, int n)
{
	size_t len;

	len = 0;
	if (str)
	{
		while (*str != n && *str++)
			len++;
	}
	return (len);
}

static void		ft_numbers_of_lines(char const *str, int n, size_t *sum)
{
	*sum = 0;
	while (*str)
	{
		while (*str == n)
			str++;
		if (*str != '\0' && *str != n)
			(*sum)++;
		while (*str != '\0' && *str != n)
			str++;
	}
}

static void		ft_input_str(char const *s, char **p_str, char c, size_t sum)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char const	*beg_line;

	j = 0;
	i = 0;
	while (j < sum && *s)
	{
		len = 0;
		while (*s == c)
			s++;
		beg_line = s;
		len = ft_strnlen(s, c);
		s += len;
		p_str[i] = ft_strnew(len);
		ft_strncpy(p_str[i], beg_line, len);
		i++;
		j++;
	}
	p_str[i] = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char		**p_str;
	size_t		sum;

	p_str = NULL;
	if (s)
	{
		ft_numbers_of_lines(s, c, &sum);
		if (!(p_str = (char **)malloc((sum + 1) * sizeof(char *))))
			return (NULL);
		ft_input_str(s, p_str, c, sum);
	}
	return (p_str);
}
