/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/07/18 11:13:54 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ft_printf.h"
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <wchar.h>
#include <float.h>
#include <math.h>

int		main(void)
{
	int a;
	int b;

	a = 10;
	b = 13;

	// test_s();
	// test_o();
	// test_x();
	// test_d();
	// test_f();
	// test_other();

	// int ret_ft;
	// int ret;

	// ft_printf("|%.f|\n", 134.50);
	// printf("|%.f|\n", 0.0);
	// printf("|%.0e|\n", 0.0000000000000099);
	// ret_ft = ft_printf("%6.10d\n", 1234);
	// ret = printf("%6.10d\n", 1234);
	// printf("ret_ft = %d\nret = %d\n", ret_ft, ret);
	// ft_printf("time: \n%k\n%k\n%s", 199203010325, 9506012200, "hello world\n");

	// ft_printf("|%.0E|\n", 0.99);

	ft_printf("|%.20g|\n", 123.9912345678123456789123456789);
	printf("|%.20g|\n", 123.9912345678123456789123456789);
	ft_printf("|%.20g|\n", 123.99);
	printf("|%.20g|\n", 123.99);

	double x = INFINITY / 0;
    printf("%e\n", x);
	ft_printf("%e\n", x);
    printf("%f\n", x);
    ft_printf("%f\n", x);
    printf("%+10g\n", x);
    ft_printf("%+10g\n", x);
    printf("\n");

	double z = 950.59990000;
    printf("%.2e\n", z);
	ft_printf("%.2e\n", z);
    printf("%f\n", z);
    ft_printf("%f\n", z);
    printf("%.1g\n", z);
    ft_printf("%.1g\n", z);
    printf("\n");

    double y = 123.123;
    printf("%.0e\n", y);
	ft_printf("%.0e\n", y);
    printf("%f\n", y);
    ft_printf("%f\n", y);
    printf("%.8g\n", y);
    ft_printf("%.8g\n", y);
	return (0);
}
