/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:21:52 by cormund           #+#    #+#             */
/*   Updated: 2019/06/07 10:00:14 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_num2binary(long int num)
{
	char	tmp_bin[31];
	char	*bin;
	char	*start_bin;
	int		len;

	len = 0;
	*tmp_bin = '0';
	while (num>>len)
		tmp_bin[len++] = (num & 1 ? '1' : '0');
	len ? 1 : len++;
	bin = (char *)malloc((len + 1) * sizeof(char));
	if (!(start_bin = bin))
		return (NULL);
	bin[len] = '\0';
	while (len--)
		*bin++ = tmp_bin[len];
	return (start_bin);
}