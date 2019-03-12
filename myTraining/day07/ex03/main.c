/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 12:54:58 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/10 16:49:46 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_concat_params(int size, char **str_argv)
{
	char	*p_main;
	int		i;
	int		j;
	int		s_len;
	int		k;

	i = 0;
	j = 1;
	s_len = 0;
	while (j < size)
		s_len += ft_strlen(str_argv[j++]);
	p_main = (char *)malloc(s_len * sizeof(char));
	j = 1;
	while (j < size)
	{
		k = 0;
		while (str_argv[j][k])
		{
			p_main[i] = str_argv[j][k++];
			i++;
		}
		p_main[i++] = '\n';
		j++;
	}
	return (p_main);
}

int		main(int argc, char *argv[])
{
	char *p_main;

	p_main = ft_concat_params(argc, argv);
	printf("%s", p_main);
	free(p_main);
	return (0);
}
