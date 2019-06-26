/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:26:17 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 09:06:37 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project2.h"

int main(void)
{
	char		buf[SIZE_WORD];
	int			ret_scanf;
	t_line		*beg;
	t_line		*val;

	printf("Введите значение: \n");
	do
	{
		ret_scanf = scanf("%5s", buf);
	}
	while (ret_scanf);
	return (0);
}