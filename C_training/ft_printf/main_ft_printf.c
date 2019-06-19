/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/06/19 16:21:38 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int		main(void)
{
//?test part
	//!format d
	// printf("format d\n");
	// ft_printf("%ld");
	// ft_printf("%lld");
	// ft_printf("%hd");
	// ft_printf("%hhd");
	// ft_printf("%jd");
	// ft_printf("%zd");
	// ft_printf("%Ld");
	// //!format i
	// printf("format i\n");
	// ft_printf("%li");
	// ft_printf("%lli");
	// ft_printf("%hi");
	// ft_printf("%hhi");
	// ft_printf("%ji");
	// ft_printf("%zi");
	// ft_printf("%Li");
	// //!format o
	// printf("format o\n");
	// ft_printf("%lo");
	// ft_printf("%llo");
	// ft_printf("%ho");
	// ft_printf("%hho");
	// ft_printf("%jo");
	// ft_printf("%zo");
	// //!format x
	// printf("format x\n");
	// ft_printf("%lx");
	// ft_printf("%llx");
	// ft_printf("%hx");
	// ft_printf("%hhx");
	// ft_printf("%jx");
	// ft_printf("%zx");
	// //!format u
	// printf("format u\n");
	// ft_printf("%lu");
	// ft_printf("%llu");
	// ft_printf("%hu");
	// ft_printf("%hhu");
	// ft_printf("%ju");
	// ft_printf("%zu");
	// //!format f
	// printf("format f\n");
	// ft_printf("%lf");
	// ft_printf("%llf");
	// ft_printf("%hf");
	// ft_printf("%hhf");
	// ft_printf("%jf");
	// ft_printf("%zf");
	// ft_printf("%Lf");
	// //!format g
	// printf("format g\n");
	// ft_printf("%lg");
	// ft_printf("%llg");
	// ft_printf("%hg");
	// ft_printf("%hhg");
	// ft_printf("%jg");
	// ft_printf("%zg");
	// ft_printf("%Lg");
	// //!format G
	// printf("format G\n");
	// ft_printf("%lG");
	// ft_printf("%llG");
	// ft_printf("%hG");
	// ft_printf("%hhG");
	// ft_printf("%jG");
	// ft_printf("%zG");
	// ft_printf("%LG");
	//printf("hello %w %f\n", 10, 5.1);
	//ft_printf("hello world %24.10d wow", 2);
	//ft_printf("a = %x b = %x c = %x\n", 20, 15, 10);
	//printf("% .5d", -10);
	//ft_printf("%2d\n", a);
	//ft_printf("%1.10d\n", 15);
	// printf("------------test1-------------\n");
	// ft_printf("%6.10d\n", 1234);
	// printf("%6.10d\n", 1234);

	// printf("------------test2-------------\n");
	// ft_printf("%3.2d\n", 1234);
	// printf("%3.2d\n", 1234);

	// printf("------------test3-------------\n");
	// ft_printf("%2.4d\n", 1234);
	// printf("%2.4d\n", 1234);

	// printf("------------test4-------------\n");
	// ft_printf("%10.5d\n", 1234);
	// printf("%10.5d\n", 1234);

	// printf("------------test5-------------\n");
	// ft_printf("%10.3d\n", 1234);
	// printf("%10.3d\n", 1234);

	// printf("------------test6-------------\n");
	//ft_printf("%3.10d\n", 1234);
	// printf("%3.10d\n", 1234);

	//printf("%,*.d", 5, 4);
	// printf("test7\n");
	//ft_printf("%d\n", 0);
	//ft_printf("a=%10d\nb=%d\n", 25, 123);
	// printf("a = %10.d\nb = %d\n", 25, 31);
	// ft_printf("a = %20.d\nb = %d\n", 25, 31);
	// ft_printf("hello %+-15.10d world\n", 123);
	// printf("hello %+-15.10d world\n", 123);
	// printf("--------test1.1----------\n");
	// printf("hiw are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45);
	// ft_printf("hiw are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45);
	// printf("--------test2.1----------\n");
	// printf("hello %15.10d world\na = %+10.5d\n", 123, 45);
	// ft_printf("hello %15.10d world\na = %+10.5d\n", 123, 45);
//	printf("--------test3.1----------\n");
//	printf("%+d\n", 0);
//	ft_printf("%+d\n", 0);
	//ft_printf("%#llx\n", -143);
	//printf("%#llx\n", -143);
	// ft_printf("%#x\n", 0);
	// printf("%#.5x\n", 0);

	// !  tests for spec "d"

	printf("------------test1-------------\n");
	ft_printf("%#.10d\n", 1234);
	printf("%#.10d\n", 1234);

	printf("------------test2-------------\n");
	ft_printf("%3###---.2d\n", 1234);
	printf("%3###---.2d\n", 1234);

	printf("------------test3-------------\n");
	ft_printf("%--+++--10.40d\n", 1234);
	printf("%--+++--10.40d\n", 1234);

	printf("------------test4-------------\n");
	ft_printf("%##....4..4lld\n", 1234);
	printf("%##....4..4lld\n", 1234);

	printf("------------test5-------------\n");
	ft_printf("%0d\n", 1234);
	printf("%0d\n", 1234);

	printf("------------test6-------------\n");
	ft_printf("%.0d\n", 1234);
	printf("%.0d\n", 1234);

	printf("------------test7-------------\n");
	ft_printf("%#010.10d\n", 1234);
	printf("%#010.10d\n", 1234);

	printf("------------test8-------------\n");
	ft_printf("%-10.10d\n", 1234);
	printf("%-10.10d\n", 1234);

	printf("------------test9-------------\n");
	ft_printf("%+++10.40d\n", 1234);
	printf("%+++10.40d\n", 1234);

	printf("------------test10-------------\n");
	ft_printf("%@;+..4..4hd\n", 1234);
	printf("%@;+..4..4hd\n", 1234);

	printf("------------test11-------------\n");
	ft_printf("%020.10d\n", 1234);
	printf("%020.10d\n", 1234);

	printf("------------test12-------------\n");
	ft_printf("%0d\n", 0);
	printf("%0d\n", 0);

	printf("------------test13-------------\n");
	ft_printf("%@;+..4..4hd\n", 0);
	printf("%@;+..4..4hd\n", 0);

	printf("------------test14-------------\n");
	ft_printf("%020.0d\n", 0);
	printf("%020.0d\n", 0);

	printf("------------test15-------------\n");
	ft_printf("%0.d\n", 0);
	printf("%0.d\n", 0);

	printf("------------test16-------------\n");
	ft_printf("%0d\n", -1);
	printf("%0d\n", -1);

	printf("------------test17-------------\n");
	ft_printf("%@;+..4..4hd\n", -1);
	printf("%@;+..4..4hd\n", -1);

	printf("------------test18-------------\n");
	ft_printf("%020.0d\n", -1);
	printf("%020.0d\n", -1);

	printf("------------test19-------------\n");
	ft_printf("%0.d\n", -1);
	printf("%0.d\n", -1);


	printf("--------test4.1----------\n");
	printf("%-+10.5d\n", 31);
	ft_printf("%-+10.5d\n", 31);

	printf("--------test4.2----------\n");
	printf("%-+5.10d\n", 31);
	ft_printf("%-+5.10d\n", 31);

	printf("--------test4.3----------\n");
	printf("%+10.5d\n", 31);
	ft_printf("%+10.5d\n", 31);

	printf("--------test4.4----------\n");
	printf("%+5.10d\n", 31);
	ft_printf("%+5.10d\n", 31);

	printf("--------test4.5----------\n");
	printf("%-+10.1dw\n", 31);
	ft_printf("%-+10.1dw\n", 31);

	printf("--------test4.6----------\n");
	printf("%+10.1dw\n", 31);
	ft_printf("%+10.1dw\n", 31);

	printf("--------test4.7----------\n");
	printf("% 5.10dw\n", 31);
	ft_printf("% 5.10dw\n", 31);

	printf("--------test4.8----------\n");
	printf("%02.dw\n", 31);
	ft_printf("%02.dw\n", 31);

	printf("--------test4.8----------\n");
	printf("% 10.dw\n", -31);
	ft_printf("% 10.dw\n", -31);

	printf("--------test4.8----------\n");
	printf("%+10.hdw\n", 31);
	ft_printf("%+10.hdw\n", 31);
	return (0);
}
