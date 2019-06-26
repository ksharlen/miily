/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:28:57 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 14:35:42 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_str_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format++))
		++ret;
	return (ret);
}

int		ft_ismy(char form)
{

	if (((form >= 0 && form < 32) || (form > 32 && form < 35) ||
	form == 37 || form == '%' || form == '$' || form == '&' ||
	form == 40 || form == 41 || form == ',' || form == '/' ||
	(form > 59 && form < 76) ||	(form > 76 && form < 95) ||
	(form > 95 && form < 104) || (form > 104 && form < 106) ||
	(form > 106 && form < 108) || (form > 108 && form < 116) ||
	(form > 116 && form < 122) || form > 122))
	{
		return (1);
	}
	return (0);
}