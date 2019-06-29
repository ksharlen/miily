/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/06/29 11:21:04 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"
#include <stdint.h>
#include <stddef.h>

int		main(void)
{
	//int a = 10;
//?test part
	//!format d
	// //printf("format d\n");
	// ft_printf("%ld");
	// ft_printf("%lld");
	// ft_printf("%hd");
	// ft_printf("%hhd");
	// ft_printf("%jd");
	// ft_printf("%zd");
	// ft_printf("%Ld");
	// // //!format i
	// //printf("format i\n");
	// ft_printf("%li");
	// ft_printf("%lli");
	// ft_printf("%hi");
	// ft_printf("%hhi");
	// ft_printf("%ji");
	// ft_printf("%zi");
	// ft_printf("%Li");
	// //!format o
	// //printf("format o\n");
	// ft_printf("%lo");
	// ft_printf("%llo");
	// ft_printf("%ho");
	// ft_printf("%hho");
	// ft_printf("%jo");
	// ft_printf("%zo");
	// //!format x
	// //printf("format x\n");
	// ft_printf("%lx");
	// ft_printf("%llx");
	// ft_printf("%hx");
	// ft_printf("%hhx");
	// ft_printf("%jx");
	// ft_printf("%zx");
	// //!format u
	// //printf("format u\n");
	// ft_printf("%lu");
	// ft_printf("%llu");
	// ft_printf("%hu");
	// ft_printf("%hhu");
	// ft_printf("%ju");
	// ft_printf("%zu");
	// //!format f
	// //printf("format f\n");
	// ft_printf("%lf");
	// ft_printf("%llf");
	// ft_printf("%hf");
	// ft_printf("%hhf");
	// ft_printf("%jf");
	// ft_printf("%zf");
	// ft_printf("%Lf");
	// //!format g
	// //printf("format g\n");
	// ft_printf("%lg");
	// ft_printf("%llg");
	// ft_printf("%hg");
	// ft_printf("%hhg");
	// ft_printf("%jg");
	// ft_printf("%zg");
	// ft_printf("%Lg");
	// //!format G
	// //printf("format G\n");
	// ft_printf("%lG");
	// ft_printf("%llG");
	// ft_printf("%hG");
	// ft_printf("%hhG");
	// ft_printf("%jG");
	// ft_printf("%zG");
	// ft_printf("%LG");
	// ////printf("hello %w %f\n", 10, 5.1);
	// ft_printf("hello world %24.10d wow", 2);
	// ft_printf("a = %x b = %x c = %x\n", 20, 15, 10);
	// ////printf("% .5d", -10);
	// ft_printf("%2d\n", a);
	// ft_printf("%1.10d\n", 15);
	// ////printf("------------test1-------------\n");
	// ft_printf("%6.10d\n", 1234);
	// //printf("%6.10d\n", 1234);

	// ////printf("------------test2-------------\n");
	// ft_printf("%3.2d\n", 1234);
	// ////printf("%3.2d\n", 1234);

	// ////printf("------------test3-------------\n");
	// ft_printf("%2.4d\n", 1234);
	// ////printf("%2.4d\n", 1234);

	// ////printf("------------test4-------------\n");
	// ft_printf("%10.5d\n", 1234);
	// ////printf("%10.5d\n", 1234);

	// ////printf("------------test5-------------\n");
	// ft_printf("%10.3d\n", 1234);
	// ////printf("%10.3d\n", 1234);

	// ////printf("------------test6-------------\n");
	// ft_printf("%3.10d\n", 1234);
	// ////printf("%3.10d\n", 1234);

	// ////printf("%,*.d", 5, 4);
	// ////printf("test7\n");
	// ft_printf("%d\n", 0);
	// ft_printf("a=%10d\nb=%d\n", 25, 123);
	// ////printf("a = %10.d\nb = %d\n", 25, 31);
	// ft_printf("a = %20.d\nb = %d\n", 25, 31);
	// ft_printf("hello %+-15.10d world\n", 123);
	// //printf("hello %+-15.10d world\n", 123);
	// //printf("--------test1.1----------\n");
	// //printf("hiw are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45);
	// ft_printf("hiw are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45);
	// //printf("--------test2.1----------\n");
	// //printf("hello %15.10d world\na = %+10.5d\n", 123, 45);
	// ft_printf("hello %15.10d world\na = %+10.5d\n", 123, 45);
	// //printf("--------test3.1----------\n");
	// //printf("%+d\n", 0);
	// ft_printf("%+d\n", 0);
	// ft_printf("%#llx\n", -143);
	// //printf("%#llx\n", -143);
	// ft_printf("%#x\n", 0);
	// //printf("%#.5x\n", 0);

	// //!  tests for spec "d"

	// //printf("------------test1-------------\n");
	// ft_printf("%#.10d\n", 1234);
	// //printf("%#.10d\n", 1234);

	// //printf("------------test2-------------\n");
	// ft_printf("%3###---.2d\n", 1234);
	// //printf("%3###---.2d\n", 1234);

	// //printf("------------test3-------------\n");
	// ft_printf("%--+++--10.40d\n", 1234);
	// //printf("%--+++--10.40d\n", 1234);

	// //printf("------------test4-------------\n");
	// ft_printf("%##....4..4lld\n", 1234);
	// //printf("%##....4..4lld\n", 1234);

	// //printf("------------test5-------------\n");
	// ft_printf("%0d\n", 1234);
	// //printf("%0d\n", 1234);

	// //printf("------------test6-------------\n");
	// ft_printf("%.0d\n", 1234);
	// //printf("%.0d\n", 1234);

	// //printf("------------test7-------------\n");
	// ft_printf("%#010.10d\n", 1234);
	// //printf("%#010.10d\n", 1234);

	// //printf("------------test8-------------\n");
	// ft_printf("%-10.10d\n", 1234);
	// //printf("%-10.10d\n", 1234);

	// //printf("------------test9-------------\n");
	// ft_printf("%+++10.40d\n", 1234);
	// //printf("%+++10.40d\n", 1234);

	// //!не обрабатывается @
	// //printf("------------test10-------------\n");
	// ft_printf("%;+..4..4hd\n", 1234);
	// //printf("%;+..4..4hd\n", 1234);

	// //printf("------------test11-------------\n");
	// ft_printf("%020.10d\n", 1234);
	// //printf("%020.10d\n", 1234);

	// //printf("------------test12-------------\n");
	// ft_printf("%0d\n", 0);
	// //printf("%0d\n", 0);

	// //printf("------------test13-------------\n");
	// ft_printf("%+..4..4hd\n", 0);
	// //printf("%+..4..4hd\n", 0);

	// //printf("------------test14-------------\n");
	// ft_printf("%020.0d\n", 0);
	// //printf("%020.0d\n", 0);

	// //printf("------------test15-------------\n");
	// ft_printf("%0.d\n", 0);
	// //printf("%0.d\n", 0);

	// //printf("------------test16-------------\n");
	// ft_printf("%0d\n", -1);
	// //printf("%0d\n", -1);

	// //printf("------------test17-------------\n");
	// ft_printf("%;+..4..4hd\n", -1);
	// //printf("%;+..4..4hd\n", -1);

	// //printf("------------test18-------------\n");
	// ft_printf("%020.0d\n", -1);
	// //printf("%020.0d\n", -1);

	// //printf("------------test19-------------\n");
	// ft_printf("%0.d\n", -1);
	// //printf("%0.d\n", -1);


	// //printf("--------test4.1----------\n");
	// //printf("%-+10.5d\n", 31);
	// ft_printf("%-+10.5d\n", 31);

	// //printf("--------test4.2----------\n");
	// //printf("%-+5.10d\n", 31);
	// ft_printf("%-+5.10d\n", 31);

	// //printf("--------test4.3----------\n");
	// //printf("%+10.5d\n", 31);
	// ft_printf("%+10.5d\n", 31);

	// //printf("--------test4.4----------\n");
	// //printf("%+5.10d\n", 31);
	// ft_printf("%+5.10d\n", 31);

	// //printf("--------test4.5----------\n");
	// //printf("%-+10.1dw\n", 31);
	// ft_printf("%-+10.1dw\n", 31);

	// //printf("--------test4.6----------\n");
	// //printf("%+10.1dw\n", 31);
	// ft_printf("%+10.1dw\n", 31);

	// //printf("--------test4.7----------\n");
	// //printf("% 5.10dw\n", 31);
	// ft_printf("% 5.10dw\n", 31);

	// //printf("--------test4.8----------\n");
	// //printf("%02.dw\n", 31);
	// ft_printf("%02.dw\n", 31);

	// //printf("--------test4.8----------\n");
	// //printf("% 10.dw\n", -31);
	// ft_printf("% 10.dw\n", -31);

	// //printf("--------test4.8----------\n");
	// //printf("%+10.hdw\n", 31);
	// ft_printf("%+10.hdw\n", 31);

	// //!  tests for spec "x/X"

	// //printf("------------test1-------------\n");
	// ft_printf("|%020x|\n", 1234);
	// //printf("|%020x|\n", 1234);

	// //printf("------------test2-------------\n");
	// ft_printf("|%#0.20x|\n", 1234);
	// //printf("|%#0.20x|\n", 1234);

	// //printf("------------test3-------------\n");
	// ft_printf("|%0.0x|\n", 1234);
	// //printf("|%0.0x|\n", 1234);

	// //printf("------------test4-------------\n");
	// ft_printf("|%20.4x|\n", 1234);
	// //printf("|%20.4x|\n", 1234);

	// //printf("------------test5-------------\n");
	// ft_printf("|%4.5x|\n", 1234);
	// //printf("|%4.5x|\n", 1234);

	// //printf("------------test6-------------\n");
	// ft_printf("|%-20x|\n", 1234);
	// //printf("|%-20x|\n", 1234);

	// //printf("------------test7-------------\n");
	// ft_printf("|%0x|\n", 0);
	// //printf("|%0x|\n", 0);

	// //printf("------------test8-------------\n");
	// ft_printf("|%#x|\n", 0);
	// //printf("|%#x|\n", 0);

	// //printf("------------test9-------------\n");
	// ft_printf("|%.1x|\n", 0);
	// //printf("|%.1x|\n", 0);

	// //printf("------------test10-------------\n");
	// ft_printf("|%03.0x|\n", 0);
	// //printf("|%03.0x|\n", 0);

	// //printf("------------test11-------------\n");
	// ft_printf("|%#5x|\n", 0);
	// //printf("|%#5x|\n", 0);

	// //printf("------------test12-------------\n");
	// ft_printf("|%#-10x|\n", 0);
	// //printf("|%#-10x|\n", 0);

	// //printf("------------test13-------------\n");
	// ft_printf("%+..4..4hd\n", 0);
	// //printf("%+..4..4hd\n", 0);

	// //printf("------------test14-------------\n");
	// ft_printf("|%x|\n", 0);
	// //printf("|%x|\n", 0);

	// //printf("------------test15-------------\n");
	// ft_printf("|%#x|\n", 0);
	// //printf("|%#x|\n", 0);

	// //printf("------------test16-------------\n");
	// ft_printf("|%#-20.10x|\n", 0);
	// //printf("|%#-20.10x|\n", 0);

	// //printf("------------test17-------------\n");
	// ft_printf("%;+..4..4hd\n", -1);
	// //printf("%;+..4..4hd\n", -1);

	// //printf("------------test18-------------\n");
	// ft_printf("|%#.x|\n", 1234);
	// //printf("|%#.x|\n", 1234);

	// //printf("------------test19-------------\n");
	// ft_printf("|%#-20x|\n", 1);
	// //printf("|%#-20x|\n", 1);

	// //printf("------------test20-------------\n");
	// ft_printf("|%#20x|\n", 1);
	// //printf("|%#20x|\n", 1);

	// // ? tests for spes "o"

	// //printf("------------test1-------------\n");
	// ft_printf("|%020o|\n", 1234);
	// //printf("|%020o|\n", 1234);

	// //printf("------------test2-------------\n");
	// ft_printf("|%#020o|\n", 1234);
	// //printf("|%#020o|\n", 1234);

	// //printf("------------test3-------------\n");
	// ft_printf("|%0.0o|\n", 1234);
	// //printf("|%0.0o|\n", 1234);

	// //printf("------------test4-------------\n");
	// ft_printf("|%20.4o|\n", 1234);
	// //printf("|%20.4o|\n", 1234);

	// //printf("------------test5-------------\n");
	// ft_printf("|%4.5o|\n", 1234);
	// //printf("|%4.5o|\n", 1234);

	// //printf("------------test6-------------\n");
	// ft_printf("|%-20o|\n", 1234);
	// //printf("|%-20o|\n", 1234);

	// //printf("------------test7-------------\n");
	// ft_printf("|%0o|\n", 0);
	// //printf("|%0o|\n", 0);

	// //printf("------------test8-------------\n");
	// ft_printf("|%#o|\n", 0);
	// //printf("|%#o|\n", 0);

	// //printf("------------test9-------------\n");
	// ft_printf("|%.1o|\n", 0);
	// //printf("|%.1o|\n", 0);

	// //printf("------------test10-------------\n");
	// ft_printf("|%03.0o|\n", 0);
	// //printf("|%03.0o|\n", 0);

	// //printf("------------test11-------------\n");
	// ft_printf("|%#5o|\n", 0);
	// //printf("|%#5o|\n", 0);

	// //printf("------------test12-------------\n");
	// ft_printf("|%#-10o|\n", 0);
	// //printf("|%#-10o|\n", 0);

	// //printf("------------test13-------------\n");
	// ft_printf("%+..4..4hd\n", 0);
	// //printf("%+..4..4hd\n", 0);

	// //printf("------------test14-------------\n");
	// ft_printf("|%o|\n", 0);
	// //printf("|%o|\n", 0);

	// //printf("------------test15-------------\n");
	// ft_printf("|%#o|\n", 0);
	// //printf("|%#o|\n", 0);

	// //printf("------------test16-------------\n");
	// ft_printf("|%-20.10o|\n", 0);
	// //printf("|%-20.10o|\n", 0);

	// //printf("------------test17-------------\n");
	// ft_printf("%;+..4..4hd\n", -1);
	// //printf("%;+..4..4hd\n", -1);

	// //printf("------------test18-------------\n");
	// ft_printf("|%#.o|\n", 1234);
	// //printf("|%#.o|\n", 1234);

	// //printf("------------test19-------------\n");
	// ft_printf("|%-20o|\n", 1);
	// //printf("|%-20o|\n", 1);

	// //printf("------------test20-------------\n");
	// ft_printf("|%#.o|\n", 0);
	// //printf("|%#.o|\n", 0);

	// //printf("------------test21-------------\n");
	// ft_printf("|%-20.0o|\n", 0);
	// //printf("|%-20.0o|\n", 0);

	// //printf("------------test22-------------\n");
	// ft_printf("|%#10.o|\n", 0);
	// //printf("|%#10.o|\n", 0);

	// //printf("------------test23-------------\n");
	// ft_printf("|%.o|\n", 0);
	// //printf("|%.o|\n", 0);

	// //printf("%-+020.10X\n", 4123453);
	// ft_printf("%-+020.10X\n", 4123453);

	// //printf("%0+-#20.20w %d\n", 45);
	// //printf("%-10w hello world %010y    how are yoU?\n");
	// //printf("%20zw %dhello\n", 10);
	// ft_printf("%20zw %dhello\n", 10);

	// //printf("%d\n", 10);
	// ft_printf("%d\n", 10);

	// //printf("%w hello world\n");
	// ft_printf("%w hello world\n");

	// //printf("%ll.,d", 34);
	// ft_printf("%$\n", 45);
	// //*Не проходит
	// ft_printf("%;:+hh-;h: h0.10.10 lld\n", 45);
	// //printf("%*.*13d", 1, 10, 5);
	// //printf("%*.*d", 13);
	// //printf("%HHd\n", 34);
	// ft_printf("%20.20\n");
	// //printf("%.*.*.*d", 13, 13, 5, 42);
	// //printf("%td\n", 45);
	// ft_printf("%*.*d\n", 13, 25, 13);
	// //printf("%4.*dworld", -10, 13);
	// //printf("%$d\n", 45);
	// //printf("%2$d\n", 45, 45);
	// //printf("intmax_t = %ld\n", sizeof(intmax_t));
	// //printf("ptrdiff_t = %ld\n", sizeof(ptrdiff_t));
	// //printf("size_t = %ld\n", sizeof(size_t));
	// ft_printf("%Lhhd", 23);
	// ft_printf("%hhO\n", 23);
	// ft_printf("% +d", 23);
	// //printf("%hhO\n", 23.1);
	// //printf("\n");
	// //printf("%**.*d\n", 2, 14, 10, 3, 10);
	// ft_printf("%**.*d\n", 2, 14, 10, 3, 10);
	// //printf("%", 43);

	// ft_printf("%*.*d\n", -10, 20);

	// ft_printf("%c");
	// ft_printf("%hc");
	// ft_printf("%hhc");
	// ft_printf("%lc");
	// ft_printf("%llc");
	// ft_printf("%jc");
	// ft_printf("%zc");
	// ft_printf("%Lc");

	// ft_printf("%s");
	// ft_printf("%hs");
	// ft_printf("%hhs");
	// ft_printf("%ls");
	// ft_printf("%lls");
	// ft_printf("%js");
	// ft_printf("%zs");
	// ft_printf("%Ls");

	// ft_printf("%S");
	// ft_printf("%hS");
	// ft_printf("%hhS");
	// ft_printf("%lS");
	// ft_printf("%llS");
	// ft_printf("%LS");
	// ft_printf("%jS");
	// ft_printf("%zS");
	// ft_printf("%LS");

	// ft_printf("%C");
	// ft_printf("%hC");
	// ft_printf("%hhC");
	// ft_printf("%lC");
	// ft_printf("%llC");
	// ft_printf("%LC");
	// ft_printf("%jC");
	// ft_printf("%zC");
	// ft_printf("%LC");
	int a;
	int *p;

	a = 5;
	p = &a;
	//ft_printf("a = %x\n", 16);
	//ft_printf("%c", 'c');
	char n;
	n = 'w';
	char *str = "hello world";
	char *str1 = "symbal = ";
	//ft_printf("%s %s %c\n", str, str1, n);
	//ft_printf("a = %d b = %d c = %d\n", 13, 14, 25);
	//printf("%20.4s", "hello world");
	//!SRING BEGIN
		//? Флаг '-' работает для строки
		//? Ширина работает так же как и для целых чисел.
		//? Точность режет строку, если она меньше размера строки
		//? Звездочку поддерживает и для точности и для ширины
		//?
	//!STRING END

	//ft_printf("%020.18s", "hello world");
	//printf("%020.10s", "hello");
	//ft_printf("%20.10s", "hello world\n");
	//printf("%11.5s", "hello world"); //?size_num = 11;
//!TEST_STRING_BEGING
	// printf("======TEST1======\n");
	// ft_printf("%20.13s", "hello world"); //?size_num = 11;
	// printf("\n");
	// printf("%20.13s", "hello world");
	// printf("\n");

	// printf("======TEST2======\n");
	// ft_printf("%13.20s", "hello world");
	// printf("\n");
	// printf("%13.20s", "hello world");
	// printf("\n");

	// printf("======TEST3======\n");
	// ft_printf("%11.20s", "hello world");
	// printf("\n");
	// printf("%11.20s", "hello world");
	// printf("\n");

	// printf("======TEST4======\n");
	// ft_printf("%15.5s", "hello world");
	// printf("\n");
	// printf("%15.5s", "hello world");
	// printf("\n");

	// printf("======TEST5======\n");
	// ft_printf("%11.5s", "hello world");
	// printf("\n");
	// printf("%11.5s", "hello world");
	// printf("\n");

	// printf("======TEST6======\n");
	// ft_printf("%5.7s", "hello world");
	// printf("\n");
	// printf("%5.7s", "hello world");
	// printf("\n");

	// printf("======TEST7======\n");
	// ft_printf("%13.4s", "hello world");
	// printf("\n");
	// printf("%13.4s", "hello world");
	// printf("\n");
//!TEST_STRING_END

	//printf("a = %d\nstring = %s\n", 14, "work to fork");
	//ft_printf("a = %d\nstring = %s\n", 14, "work to fork");

	//ft_printf("%s\n", "test");

	//ft_printf("%.s", "hello world");
	//printf("%.s", "hello world");
	//printf("%.s\n", "hello world");
	//ft_printf("size_write = %d\n", g_spec.size_write);

//!TEST_CHAR_BEGIN

	//ft_printf("%c", 'a');
	//printf("%-102cw\n", 'a');
	//ft_printf("%-102cw\n", 'a');
//!TEST_CHAR_END
	//printf("======TEST8======\n");
	//ft_printf("a = %10.5d\nb = %13d\nchar = %-2chow\n string: %-13.4s\n", 14, 29, 'w', "hello world");
	//printf("a = %10.5d\nb = %13d\nchar = %-2chow\n string: %-13.4s\n", 14, 29, 'w', "hello world");
	//ft_printf("string:\n%s\nchar = %c\n", "hello world", 'w');
	//printf("string:\n%s\nchar = %c\n", "hello world", 'w');

//	ft_printf("string:\n%s\na = %10.5d\nchar = %c\n", "hello world", 45, 'w');
	//printf("string:\n%s\na = %10.5d\nchar = %c\n", "hello world", 45, 'w');
	//ft_printf("a = %10.5d\nb = %13d\nchar = %c\n", 14, 29, 'w');
	//ft_printf("a = %10.5d\nchar = %c\n" string: %-13.4s\n", 14, 29, 'w'", "hello world");
	//ft_printf("a = %d\nb = %c\n", 34, 'w');
	//ft_printf("char = %13c\n", 'w');

	//ft_printf("a = %c\nb = %c\nc = %10-c\nstring = %-023c\n", 'a', 'w', 'j', 'e');
	//printf("a = %c\nb = %c\nc = %10-c\nstring = %-023c\n", 'a', 'w', 'j', 'e');

//!UNIT_TESTS_BEGIN
	printf("UNIT_TESTS_BEGIN\n");
	__TEST__return_printf(0);
	printf("UNIT_TESTS_END\n");

	__TEST__check_ft_ismy(0);
//!UNIT_TESTS_END
	//printf("a = %+013d\nb = %10c\nstring: %20.4s\n", 13, 'o', "hello world");
	//ft_printf("a = %+013d\nb = %10c\nstring: %20.4s\n", 13, 'o', "hello world");

	// printf("%*.*d\n", 20, 5, 16);
	// ft_printf("%*.*d\n", 20, 5, 16);
	ft_printf("sym = %c\n", 'w');
	return (0);
}
