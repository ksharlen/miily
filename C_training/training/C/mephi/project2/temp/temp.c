/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:27:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/27 10:20:16 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

//?Закончил на ctr+D
//?Надо сделать обработку строки при первом чтении sanf

int		main(void)
{
	char	str[20];
	int		ret_scanf;

	ret_scanf = 1;
	while (ret_scanf > 0)
	{
		printf("Введите данные:\n");
		ret_scanf = scanf("%s", str);
		printf("str = %s\n", str);
	}
	printf("Достигнут EOF ручный вводом\n");
	return (0);
}