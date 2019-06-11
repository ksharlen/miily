/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2hex_or_oct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/06/11 08:31:12 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_num2hex_or_oct(long long int num, int base)
{
	char		*hex;
	size_t		len;
	int			mod;

	len = ft_base_depth(num, base);
	if (!(hex = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	hex[len] = '\0';
	while (len--)
	{
		mod = num % base;
		hex[len] = (mod > 9 ? mod + '7' : mod + '0');
		num /= base;
	}
	return (hex);
}
