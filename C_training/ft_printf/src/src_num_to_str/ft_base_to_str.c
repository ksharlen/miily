/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/06/19 11:08:58 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*ft_base_to_str(unsigned long long num, int base)
{
	char				*hex;
	size_t				len;
	int					mod;

	ft_base_depth(num, base);
	len = g_spec.size_num;
	//g_spec.size_write += g_spec.size_num;
	if (g_spec.spec == 'p')
	{
		g_spec.spec = 'x';
		g_spec.flags |= HASH;
	}
	if (!(hex = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	hex[len] = '\0';
	while (len--)
	{
		mod = num % base;
		hex[len] = (mod > 9 ? mod + g_spec.spec - 33 : mod + '0');
		num /= base;
	}
	if (g_spec.flags & HASH && g_spec.size_num != 1 && (g_spec.spec == 'x' || g_spec.spec == 'X'))
		hex[1] = g_spec.spec;
	return (hex);
}
