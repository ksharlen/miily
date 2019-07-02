/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:21:52 by cormund           #+#    #+#             */
/*   Updated: 2019/06/07 17:09:56 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_bit_depth(long int num)
{
	size_t		len;

	len = 0;
	while (num >> len && len != 64)
		++len;
	return (len ? len : ++len);
}

char			*ft_num2binary(long int num)
{
	char		*bin;
	char		*start_bin;
	size_t		len;

	len = ft_bit_depth(num);
	bin = (char *)malloc((len + 1) * sizeof(char));
	if (!(start_bin = bin))
		return (NULL);
	bin[len] = '\0';
	while (len--)
		*bin++ = (num >> len & 1) + '0';
	return (start_bin);
}
