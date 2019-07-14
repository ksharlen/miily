/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 16:55:57 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/14 13:58:02 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <assert.h>

static int		ft_isitmy(char form)
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

void		__TEST__return_printf(int flag)
{
	int		ret_printf;
	int		ret_ft_printf;
	char 	*str;

	if (flag)
	{
		str = "a = %d\nb = %c\nstring: %s\n";
		ret_ft_printf = ft_printf("test for sym: %-20c\n", 'w');
		ret_printf = printf("test for sym: %-20c\n", 'w');
		//printf("ret_ft_printf = %d\nret_printf = %d\n", ret_ft_printf, ret_printf);
		assert(ret_ft_printf && ret_printf);
		//printf("test faild\n");
		printf("test SUCCESS!!!\n");
	}
}

void		__TEST__check_ismy(int flag)
{
	int		ascii;
	int		ret_ft_isitmy;

	ascii = 0;
	while (ascii < 128)
	{
		ret_ft_isitmy = ft_isitmy(ascii);
		if (flag)
		{
			printf("ascii: %6c", ascii);
			printf("%6d\n", ret_ft_isitmy);
		}
		ascii++;
	}
}