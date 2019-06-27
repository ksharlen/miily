/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 08:52:03 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/27 09:05:27 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project2.h"

static int			ft_chek_ret_scanf(int ret_scanf)
{
	char *str;

	if (!ret_scanf || ret_scanf < 0)
	{
		str = "Попробуйте еще раз ввести строку\n";
		if (!ret_scanf)
			SCANF_FAIL("ret_scanf = 0", str);
		else if (ret_scanf < 0)
			SCANF_FAIL("Произошла непредвиденная ошибка, scanf вернул -1", str);
		return (-1);
	}
	return (0);
}

void		ft_set_line(char *buf)
{
	int		ret_scanf;

	printf("Введите строку\n");
	do
	{
		ret_scanf = scanf("%s", buf);
		ft_chek_ret_scanf(ret_scanf);
	} while (!ret_scanf || ret_scanf < 0);
}