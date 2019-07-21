#include "testing.h"

void	test_other(void)
{
	printf("***************************\n");
	printf("*********TEST_OTHER********\n");
	printf("***************************\n");

	printf("------------test1-------------\n");
	assert(ft_printf("%6.10d\n", 1234) == printf("%6.10d\n", 1234));

	printf("------------test2-------------\n");
	assert(ft_printf("%3.2d\n", 1234) == printf("%3.2d\n", 1234));

	printf("------------test3-------------\n");
	assert(ft_printf("%2.4d\n", 1234) == printf("%2.4d\n", 1234));

	printf("------------test4-------------\n");
	assert(ft_printf("%10.5d\n", 1234) == printf("%10.5d\n", 1234));

	printf("------------test5-------------\n");
	assert(ft_printf("%10.3d\n", 1234) == printf("%10.3d\n", 1234));

	printf("------------test6-------------\n");
	assert(ft_printf("%3.10d\n", 1234) == printf("%3.10d\n", 1234));

	printf("------------test7-------------\n");
	assert(ft_printf("a = %20.d\nb = %d\n", 25, 31) == printf("a = %20.d\nb = %d\n", 25, 31));

	printf("------------test8-------------\n");
	assert(ft_printf("hello %+-15.10d world\n", 123) == printf("hello %+-15.10d world\n", 123));

	printf("------------test9-------------\n");
	assert(ft_printf("how are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45) == printf("how are you? % -20.5d hmm?\nfine %-+15.5d\n", -321, 45));

	printf("------------test10------------\n");
	assert(ft_printf("hello %15.10d world\na = %+10.5d\n", 123, 45) == printf("hello %15.10d world\na = %+10.5d\n", 123, 45));

	printf("------------test11------------\n");
	assert(ft_printf("%+d\n", 0) == printf("%+d\n", 0));

	printf("------------test12-------------\n");
	assert(ft_printf("%#llx\n", -143) == printf("%#llx\n", -143));

	printf("------------test13-------------\n");
	assert(ft_printf("%#.5x\n", 0) == printf("%#.5x\n", 0));

	printf("------------test14-------------\n");
	assert(ft_printf("%w hello world\n") == printf("%w hello world\n"));

	printf("------------test15-------------\n");
	assert(ft_printf("%;:+hh-;h: h0.10.10 lld\n", 45) == printf("%;:+hh-;h: h0.10.10 lld\n", 45));

	printf("------------test16-------------\n");
	assert(ft_printf("%*.*13d\n", 1, 10, 5) == printf("%*.*13d\n", 1, 10, 5));

	printf("------------test17-------------\n");
	assert(ft_printf("%**.*d\n", 2, 14, 10, 3, 10) == printf("%**.*d\n", 2, 14, 10, 3, 10));

	printf("------------test18-------------\n");
	assert(ft_printf("a = %d\nstring = %s\n", 14, "work to fork") == printf("a = %d\nstring = %s\n", 14, "work to fork"));

	printf("------------test19-------------\n");
	assert(ft_printf("%.s\n", "hello world") == printf("%.s\n", "hello world"));

	printf("------------test20-------------\n");
	assert(ft_printf("a = %10.5d\nb = %13d\nchar = %-2chow\n string: %-13.4s\n", 14, 29, 'w', "hello world") == printf("a = %10.5d\nb = %13d\nchar = %-2chow\n string: %-13.4s\n", 14, 29, 'w', "hello world"));

	printf("------------test21-------------\n");
	assert(ft_printf("string:\n%s\nchar = %c\n", "hello world", 'w') == printf("string:\n%s\nchar = %c\n", "hello world", 'w'));

	printf("------------test22-------------\n");
	assert(ft_printf("string:\n%s\na = %10.5d\nchar = %c\n", "hello world", 45, 'w') == printf("string:\n%s\na = %10.5d\nchar = %c\n", "hello world", 45, 'w'));

	printf("------------test23-------------\n");
	assert(ft_printf("a = %10.5d\nb = %13d\nchar = %c\n", 14, 29, 'w') == printf("a = %10.5d\nb = %13d\nchar = %c\n", 14, 29, 'w'));

	printf("------------test24-------------\n");
	assert(ft_printf("a = %c\nb = %c\nc = %10-c\nstring = %-023c\n", 'a', 'w', 'j', 'e') == printf("a = %c\nb = %c\nc = %10-c\nstring = %-023c\n", 'a', 'w', 'j', 'e'));

	printf("------------test25-------------\n");
	assert(ft_printf("a = %+013d\nb = %10c\nstring: %20.4s\n", 13, 'o', "hello world") == printf("a = %+013d\nb = %10c\nstring: %20.4s\n", 13, 'o', "hello world"));

	printf("------------test26-------------\n");
	assert(ft_printf("%*.*d\n", 20, 5, 16) == printf("%*.*d\n", 20, 5, 16));

	printf("------------test27-------------\n");
	assert(ft_printf("test char: %20c\n", 'w') == printf("test char: %20c\n", 'w'));

	printf("------------test28-------------\n");
	assert(ft_printf("%whow are you?\n", 43) == printf("%whow are you?\n", 43));

	printf("------------test29-------------\n");
	assert(ft_printf("%d\n", 34) == printf("%d\n", 34));

	printf("------------test30-------------\n");
	assert(ft_printf("hello world %20.10d\n", 13) == printf("hello world %20.10d\n", 13));

	printf("------------test31-------------\n");
	assert(ft_printf("%20.1d %.1d %d %lld\n", 13, 14, 24, 100) == printf("%20.1d %.1d %d %lld\n", 13, 14, 24, 100));

	printf("------------test32-------------\n");
	assert(ft_printf("%%%%dello world\na = %d\n", 123, 32) == printf("%%%%dello wolrd\na = %d\n", 123, 32));
}