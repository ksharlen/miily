/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:27:08 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 13:07:35 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <assert.h>

void	test_c(void)
{
	printf("***************************\n");
	printf("********TEST_CHAR**********\n");
	printf("***************************\n");

	printf("===========TEST1===========\n");
	ft_printf("%-102cw\n", 'a');
	printf("%-102cw\n", 'a');

	printf("===========TEST2===========\n");
	ft_printf("%c\n", 'c');
	printf("%c\n", 'c');
}

void	test_s(void)
{
	printf("***************************\n");
	printf("********TEST_STRING********\n");
	printf("***************************\n");

	printf("===========TEST1===========\n");
	assert(ft_printf("%20.13s\n", "hello world") == printf("%20.13s\n", "hello world"));

	printf("===========TEST2===========\n");
	assert(ft_printf("%13.20s\n", "hello world") == printf("%13.20s\n", "hello world"));

	printf("===========TEST3===========\n");
	assert(ft_printf("%11.20s\n", "hello world") == printf("%11.20s\n", "hello world"));

	printf("===========TEST4===========\n");
	assert(ft_printf("%15.5s\n", "hello world") == printf("%15.5s\n", "hello world"));

	printf("===========TEST5===========\n");
	assert(ft_printf("%11.5s\n", "hello world") == printf("%11.5s\n", "hello world"));

	printf("===========TEST6===========\n");
	assert(ft_printf("%5.7s\n", "hello world") == printf("%5.7s\n", "hello world"));

	printf("===========TEST7===========\n");
	assert(ft_printf("%13.4s\n", "hello world") == printf("%13.4s\n", "hello world"));

	printf("===========TEST8===========\n");
	assert(ft_printf("test_string: %20.sw\n", "one two tree") == printf("test_string: %20.sw\n", "one two tree"));

	printf("===========TEST9===========\n");
	assert(ft_printf("test_string: %020sw\n", "one two tree") == printf("test_string: %020sw\n", "one two tree"));

	printf("===========TEST10==========\n");
	assert(ft_printf("test_string: %-020.sw\n", "one two tree") == printf("test_string: %-020.sw\n", "one two tree"));
}