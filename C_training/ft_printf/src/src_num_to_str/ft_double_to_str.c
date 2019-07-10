/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 15:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/10 11:25:28 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long double			pull_double_arg(va_list format)
{
	long double				ret;

	ret = 0.0;
	if (g_spec.mod == DASH)
		ret = va_arg(format, long double);
	else
		ret = va_arg(format, double);
	return (ret);
}

void						ft_double_to_str(va_list format)
{
	t_uni					val;

	val.num = pull_double_arg(format);
	test(&val);
}