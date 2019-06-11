/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2hex_or_oct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/06/11 14:28:49 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_num2hex_or_oct(long long int num, int base)
{
	char		*hex;
	size_t		len;
	int			mod;

	g_spec.size_spec = 0;
	len = ft_base_depth(num, base);
	g_spec.size_spec = len;
	//printf("size_spec = %ld\n", g_spec.size_spec);
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
