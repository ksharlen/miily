/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 01:10:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 10:05:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char 	*str = "Введите значение: \n";
	char 	*buf;
	int		ret_scanf;
	int		a;

	ret_scanf = scanf("%d", &a);
	printf("ret_scanf = %d\n", ret_scanf);
	return (0);
}