/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/07/22 17:11:36 by cormund          ###   ########.fr       */
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
	//test_o();
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

	// ft_printf("|%.20g|\n", 123.9912345678123456789123456789);
	// printf("|%.20g|\n", 123.9912345678123456789123456789);
	// ft_printf("|%.20g|\n", 123.99);
	// printf("|%.20g|\n", 123.99);

	// double x = INFINITY / 0;
    // printf("%e\n", x);
	// ft_printf("%e\n", x);
    // printf("%f\n", x);
    // ft_printf("%f\n", x);
    // printf("%+10g\n", x);
    // ft_printf("%+10g\n", x);
    // printf("\n");

	// double z = 950.59990000;
    // printf("%.2e\n", z);
	// ft_printf("%.2e\n", z);
    // printf("%f\n", z);
    // ft_printf("%f\n", z);
    // printf("%.1g\n", z);
    // ft_printf("%.1g\n", z);
    // printf("\n");

    double y = NAN;
    // printf("%.0e\n", y);
	// ft_printf("%.0e\n", y);
    // printf("|%f|\n", y);
    // ft_printf("|%f|\n", y);
    // printf("%.8g\n", y);
    // ft_printf("%.8g\n", y);
	// ft_printf("|%-#6o|\n", 2500);
	// printf("|%-#6o|\n", 2500);

	// printf("*******************************\n");
	// printf("************O_FORMAT***********\n");
	// printf("*******************************\n\n");

	// printf("------------test1-------------\n");
	// ft_printf("|%020o|\n", 1234);
	// printf("|%020o|\n", 1234);

	// printf("------------test2-------------\n");
	// ft_printf("|%#020o|\n", 1234);
	// printf("|%#020o|\n", 1234);

	// printf("------------test3-------------\n");
	// ft_printf("|%#0.0o|\n", 1234);
	// printf("|%#0.0o|\n", 1234);

	// printf("------------test4-------------\n");
	// ft_printf("|%20.4o|\n", 1234);
	// printf("|%20.4o|\n", 1234);

	// printf("------------test5-------------\n");
	// ft_printf("|%4.5o|\n", 1234);
	// printf("|%4.5o|\n", 1234);

	// printf("------------test6-------------\n");
	// ft_printf("|%-20o|\n", 1234);
	// printf("|%-20o|\n", 1234);

	// printf("------------test7-------------\n");
	// ft_printf("|%0o|\n", 0);
	// printf("|%0o|\n", 0);

	// printf("------------test8-------------\n");
	// ft_printf("|%#o|\n", 0);
	// printf("|%#o|\n", 0);

	// printf("------------test9-------------\n");
	// ft_printf("|%.1o|\n", 0);
	// printf("|%.1o|\n", 0);

	// printf("------------test10-------------\n");
	// ft_printf("|%03.0o|\n", 0);
	// printf("|%03.0o|\n", 0);

	// printf("------------test11-------------\n");
	// ft_printf("|%#5o|\n", 0);
	// printf("|%#5o|\n", 0);

	// printf("------------test12-------------\n");
	// ft_printf("|%#-10o|\n", 0);
	// printf("|%#-10o|\n", 0);

	// printf("------------test13-------------\n");
	// ft_printf("%+..4..4hd\n", 0);
	// printf("%+..4..4hd\n", 0);

	// printf("------------test14-------------\n");
	// ft_printf("|%#.4o|\n", 1);
	// printf("|%#.4o|\n", 1);

	// printf("------------test15-------------\n");
	// ft_printf("|%#o|\n", 0);
	// printf("|%#o|\n", 0);

	// printf("------------test16-------------\n");
	// ft_printf("|%-20.10o|\n", 0);
	// printf("|%-20.10o|\n", 0);

	// printf("------------test17-------------\n");
	// ft_printf("%;+..4..4hd\n", -1);
	// printf("%;+..4..4hd\n", -1);

	// printf("------------test18-------------\n");
	// ft_printf("|%#.o|\n", 1234);
	// printf("|%#.o|\n", 1234);

	// printf("------------test19-------------\n");
	// ft_printf("|%-20o|\n", 1);
	// printf("|%-20o|\n", 1);

	// printf("------------test20-------------\n");
	// ft_printf("|%#.o|\n", 0);
	// printf("|%#.o|\n", 0);

	// printf("------------test21-------------\n");
	// ft_printf("|%-20.0o|\n", 0);
	// printf("|%-20.0o|\n", 0);

	// printf("------------test22-------------\n");
	// ft_printf("|%#10.o|\n", 0);
	// printf("|%#10.o|\n", 0);

	// printf("------------test23-------------\n");
	// ft_printf("|%.o|\n", 0);
	// printf("|%.o|\n", 0);

	// printf("------------test24-------------\n");
	// ft_printf("%-+020.10X\n", 4123453);
	// printf("%-+020.10X\n", 4123453);

	// printf("------------test25-------------\n");
	// ft_printf("%5.3o\n", 4);
	// printf("%5.3o\n", 4);
	// printf("------------test26-------------\n");
	// ft_printf("|%#6o|\n", 2500);
	// printf("|%#6o|\n", 2500);
	// printf("------------test27-------------\n");
	// ft_printf("|%-#6o|\n", 2500);
	// printf("|%-#6o|\n", 2500);

	// ft_printf("%-05d\n", 42);
	// printf("%-05d\n", 42);
	// ft_printf("%-05d\n", -42);
	// printf("%-05d\n", -42);
	
	// printf("------------test1-------------\n");
	// assert(ft_printf("%#.10d\n", 1234) == printf("%#.10d\n", 1234));

	// printf("------------test2-------------\n");
	// assert(ft_printf("%3###---.2d\n", 1234) == printf("%3###---.2d\n", 1234));

	// printf("------------test3-------------\n");
	// assert(ft_printf("%--+++--10.40d\n", 1234) == printf("%--+++--10.40d\n", 1234));

	// printf("------------test4-------------\n");
	// assert(ft_printf("%##....4..4lld\n", 1234) == printf("%##....4..4lld\n", 1234));

	// printf("------------test5-------------\n");
	// assert(ft_printf("%0d\n", 1234) == printf("%0d\n", 1234));

	// printf("------------test6-------------\n");
	// assert(ft_printf("%.0d\n", 1234) == printf("%.0d\n", 1234));

	// printf("------------test7-------------\n");
	// assert(ft_printf("%#010.10d\n", 1234) == printf("%#010.10d\n", 1234));

	// printf("------------test8-------------\n");
	// assert(ft_printf("%-10.10d\n", 1234) == printf("%-10.10d\n", 1234));

	// printf("------------test9-------------\n");
	// assert(ft_printf("%+++10.40d\n", 1234) == printf("%+++10.40d\n", 1234));

	// printf("------------test10-------------\n");
	// assert(ft_printf("%;+..4..4hd\n", 1234) == printf("%;+..4..4hd\n", 1234));

	// printf("------------test11-------------\n");
	// assert(ft_printf("%020.10d\n", 1234) == printf("%020.10d\n", 1234));

	// printf("------------test12-------------\n");
	// assert(ft_printf("%0d\n", 0) == printf("%0d\n", 0));

	// printf("------------test13-------------\n");
	// assert(ft_printf("%+..4..4hd\n", 0) == printf("%+..4..4hd\n", 0));

	// printf("------------test14-------------\n");
	// assert(ft_printf("|%020.0d|\n", 0) == printf("|%020.0d|\n", 0));

	// printf("------------test15-------------\n");
	// assert(ft_printf("|%0.d|\n", 0) == printf("|%0.d|\n", 0));

	// printf("------------test16-------------\n");
	// assert(ft_printf("%0d\n", -1) == printf("%0d\n", -1));

	// printf("------------test17-------------\n");
	// assert(ft_printf("%;+..4..4hd\n", -1) == printf("%;+..4..4hd\n", -1));

	// printf("------------test18-------------\n");
	// assert(ft_printf("%020.0d\n", -1) == printf("%020.0d\n", -1));

	// printf("------------test19-------------\n");
	// assert(ft_printf("%0.d\n", -1) == printf("%0.d\n", -1));

	// printf("------------test20-------------\n");
	// assert(ft_printf("%-+10.5d\n", 31) == printf("%-+10.5d\n", 31));

	// printf("------------test21-------------\n");
	// assert(ft_printf("%-+5.10d\n", 31) == printf("%-+5.10d\n", 31));

	// printf("------------test22-------------\n");
	// assert(ft_printf("%+10.5d\n", 31) == printf("%+10.5d\n", 31));

	// printf("------------test23-------------\n");
	// assert(ft_printf("%+5.10d\n", 31) == printf("%+5.10d\n", 31));

	// printf("------------test24-------------\n");
	// assert(ft_printf("%-+10.1dw\n", 31) == printf("%-+10.1dw\n", 31));

	// printf("------------test25-------------\n");
	// assert(ft_printf("%+10.1dw\n", 31) == printf("%+10.1dw\n", 31));

	// printf("------------test26-------------\n");
	// assert(ft_printf("% 5.10dw\n", 31) == printf("% 5.10dw\n", 31));

	// printf("------------test27-------------\n");
	// assert(ft_printf("%02.dw\n", 31) == printf("%02.dw\n", 31));

	// printf("------------test28-------------\n");
	// assert(ft_printf("% 10.dw\n", -31) == printf("% 10.dw\n", -31));

	// printf("------------test29-------------\n");
	// assert(ft_printf("%+10.hdw\n", 31) == printf("%+10.hdw\n", 31));


	// printf("*******************************\n");
	// printf("************P_FORMAT***********\n");
	// printf("*******************************\n\n");

	// char	*p = "ab";
	// printf("------------test1-------------\n");
	// ft_printf("|%p|\n", p);
	// printf("|%p|\n", p);
	// printf("------------test2-------------\n");
	// ft_printf("|%.0p|\n", p);
	// printf("|%.0p|\n", p);
	// printf("------------test3-------------\n");
	// ft_printf("|%5.0p|\n", p);
	// printf("|%5.0p|\n", p);
	// printf("------------test4-------------\n");
	// ft_printf("|%5p|\n", p);
	// printf("|%5p|\n", p);
	// printf("------------test5-------------\n");
	// ft_printf("|%.0p, %.p|\n", p, p);
	// printf("|%.0p, %.p|\n", p, p);

	// ft_printf("|%5.0x|\n", 0);
	// printf("|%5.0x|\n", 0);
	// ft_printf(">------------<%+2lf>------------<\n", -1.000000);
	// printf(">------------<%+2lf>------------<\n", -1.000000);
	ft_printf(">------------<%+2f>------------<\n", NAN);
	printf(">------------<%+2f>------------<\n", NAN);
	return (0);
}
