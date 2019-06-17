/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 01:10:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/17 12:33:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *str = "Введите значение: \n";
	char *buf;

	buf = NULL;
	write(0, str, strlen(str));
	read(1sdfa, buf, 100);
	printf("buf = %s\n", buf);
	return (0);
}