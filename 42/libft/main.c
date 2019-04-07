/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:31:03 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/07 16:02:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem_header.h"

int		main(void)
{
	char	test_str_memset[SIZE];
	char	test_str_ft_memset[SIZE];
	int		test_int_memset[SIZE];
	int		test_int_ft_memset[SIZE];
	double	test_double_memset[SIZE];
	double	test_double_ft_memset[SIZE];
	float	test_float_memset[SIZE];
	float	test_float_ft_memset[SIZE];
//STR
	memset(test_str_memset, 4.5, 16);
	printf("test_str_memset: \n%d\n", test_str_memset[1]);
	ft_memset(test_str_ft_memset, 4.5, 16);
	printf("test_str_ft_memset: \n%s\n", test_str_ft_memset);
//INT
	printf("INT: \n");
	memset(test_int_memset, 'c', 16);
	ft_print_numeric_array(test_int_memset, 4);
	printf("\n");
	ft_memset(test_int_ft_memset, 'c', 16);
	ft_print_numeric_array(test_int_ft_memset, 4);
//DOUBLE
	printf("DOUBLE: \n");
	memset(test_double_memset, 'c', 16);
	ft_print_numeric_array(test_double_memset, 4);
	printf("\n");
	ft_memset(test_double_ft_memset, 'c', 16);
	ft_print_numeric_array(test_double_ft_memset, 4);
//FLOAT
	printf("FLOAT: \n");
	memset(test_float_memset, 'c', 16);
	ft_print_numeric_array(test_float_memset, 4);
	printf("\n");
	ft_memset(test_float_ft_memset, 'c', 16);
	ft_print_numeric_array(test_float_ft_memset, 4);
	return (0);
}
