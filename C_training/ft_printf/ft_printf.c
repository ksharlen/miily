/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/05/31 21:42:34 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long		ft_type_to_long(va_list form, char type)
{
	if (type == 'd')
		return (va_arg(form, int));
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list form;
	long	var;

	va_start(form, format);
	
	return (0);
}