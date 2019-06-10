/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 21:15:17 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/04 09:50:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long		ft_control_format_int(va_list form, char *type)
{
	long	ret;

	if (!(ft_strcmp(type, "c")))
		return (ret = (char)va_arg(form, int));
	else if (!(ft_strcmp(type, "hd")))
		return (ret = ((short)(va_arg(form, int))));
	else if (!(ft_strcmp(type, "hhd")))
		return (ret = ((unsigned short)va_arg(form, int)));
	else if (!(ft_strcmp(type, "d")))
		return (ret = (va_arg(form, int)));
	else if (!(ft_strcmp(type, "u")))
		return (ret = (va_arg(form, unsigned int)));
	else if (!(ft_strcmp(type, "ld")))
		return (ret = (va_arg(form, long int)));
	else if (!(ft_strcmp(type, "lu")))
		return (ret = (va_arg(form, unsigned long)));
	else if (!(ft_strcmp(type, "lld")))
		return (ret = (va_arg(form, long long)));
	else if (!(ft_strcmp(type, "llu")))
		return (ret = (va_arg(form, unsigned long long)));
	else
		return (0);
}