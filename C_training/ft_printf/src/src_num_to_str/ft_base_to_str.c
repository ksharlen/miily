/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/06/13 15:22:36 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*ft_base_to_str(unsigned long long num, int base)
{
	char				*hex;
	size_t				len;
	int					mod;

	len = ft_base_depth(num, base);
	g_spec.size_spec = len;
	if (!(hex = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	hex[len] = '\0';
	while (len--)
	{
		mod = num % base;
		hex[len] = (mod > 9 ? mod + g_spec.spec - 33 : mod + '0');
		num /= base;
	}
	return (hex);
}
