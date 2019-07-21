#include "testing.h"

void	test_o(void)
{
	printf("*******************************\n");
	printf("************O_FORMAT***********\n");
	printf("*******************************\n\n");

	printf("------------test1-------------\n");
	assert(ft_printf("|%020o|\n", 1234) == printf("|%020o|\n", 1234));

	printf("------------test2-------------\n");
	assert(ft_printf("|%#020o|\n", 1234) == printf("|%#020o|\n", 1234));

	printf("------------test3-------------\n");
	assert(ft_printf("|%0.0o|\n", 1234) == printf("|%0.0o|\n", 1234));

	printf("------------test4-------------\n");
	assert(ft_printf("|%20.4o|\n", 1234) == printf("|%20.4o|\n", 1234));

	printf("------------test5-------------\n");
	assert(ft_printf("|%4.5o|\n", 1234) == printf("|%4.5o|\n", 1234));

	printf("------------test6-------------\n");
	assert(ft_printf("|%-20o|\n", 1234) == printf("|%-20o|\n", 1234));

	printf("------------test7-------------\n");
	assert(ft_printf("|%0o|\n", 0) == printf("|%0o|\n", 0));

	printf("------------test8-------------\n");
	assert(ft_printf("|%#o|\n", 0) == printf("|%#o|\n", 0));

	printf("------------test9-------------\n");
	assert(ft_printf("|%.1o|\n", 0) == printf("|%.1o|\n", 0));

	printf("------------test10-------------\n");
	assert(ft_printf("|%03.0o|\n", 0) == printf("|%03.0o|\n", 0));

	printf("------------test11-------------\n");
	assert(ft_printf("|%#5o|\n", 0) == printf("|%#5o|\n", 0));

	printf("------------test12-------------\n");
	assert(ft_printf("|%#-10o|\n", 0) == printf("|%#-10o|\n", 0));

	printf("------------test13-------------\n");
	assert(ft_printf("%+..4..4hd\n", 0) == printf("%+..4..4hd\n", 0));

	printf("------------test14-------------\n");
	assert(ft_printf("|%o|\n", 0) == printf("|%o|\n", 0));

	printf("------------test15-------------\n");
	assert(ft_printf("|%#o|\n", 0) == printf("|%#o|\n", 0));

	printf("------------test16-------------\n");
	assert(ft_printf("|%-20.10o|\n", 0) == printf("|%-20.10o|\n", 0));

	printf("------------test17-------------\n");
	assert(ft_printf("%;+..4..4hd\n", -1) == printf("%;+..4..4hd\n", -1));

	printf("------------test18-------------\n");
	assert(ft_printf("|%#.o|\n", 1234) == printf("|%#.o|\n", 1234));

	printf("------------test19-------------\n");
	assert(ft_printf("|%-20o|\n", 1) == printf("|%-20o|\n", 1));

	printf("------------test20-------------\n");
	assert(ft_printf("|%#.o|\n", 0) == printf("|%#.o|\n", 0));

	printf("------------test21-------------\n");
	assert(ft_printf("|%-20.0o|\n", 0) == printf("|%-20.0o|\n", 0));

	printf("------------test22-------------\n");
	assert(ft_printf("|%#10.o|\n", 0) == printf("|%#10.o|\n", 0));

	printf("------------test23-------------\n");
	assert(ft_printf("|%.o|\n", 0) == printf("|%.o|\n", 0));

	printf("------------test24-------------\n");
	assert(ft_printf("%-+020.10X\n", 4123453) == printf("%-+020.10X\n", 4123453));

	printf("------------test25-------------\n");
	assert(ft_printf("%5.3o\n", 4) == printf("%5.3o\n", 4));
}

void	test_d(void)
{
	printf("*******************************\n");
	printf("************d_FORMAT***********\n");
	printf("*******************************\n\n");

	printf("------------test1-------------\n");
	assert(ft_printf("%#.10d\n", 1234) == printf("%#.10d\n", 1234));

	printf("------------test2-------------\n");
	assert(ft_printf("%3###---.2d\n", 1234) == printf("%3###---.2d\n", 1234));

	printf("------------test3-------------\n");
	assert(ft_printf("%--+++--10.40d\n", 1234) == printf("%--+++--10.40d\n", 1234));

	printf("------------test4-------------\n");
	assert(ft_printf("%##....4..4lld\n", 1234) == printf("%##....4..4lld\n", 1234));

	printf("------------test5-------------\n");
	assert(ft_printf("%0d\n", 1234) == printf("%0d\n", 1234));

	printf("------------test6-------------\n");
	assert(ft_printf("%.0d\n", 1234) == printf("%.0d\n", 1234));

	printf("------------test7-------------\n");
	assert(ft_printf("%#010.10d\n", 1234) == printf("%#010.10d\n", 1234));

	printf("------------test8-------------\n");
	assert(ft_printf("%-10.10d\n", 1234) == printf("%-10.10d\n", 1234));

	printf("------------test9-------------\n");
	assert(ft_printf("%+++10.40d\n", 1234) == printf("%+++10.40d\n", 1234));

	printf("------------test10-------------\n");
	assert(ft_printf("%;+..4..4hd\n", 1234) == printf("%;+..4..4hd\n", 1234));

	printf("------------test11-------------\n");
	assert(ft_printf("%020.10d\n", 1234) == printf("%020.10d\n", 1234));

	printf("------------test12-------------\n");
	assert(ft_printf("%0d\n", 0) == printf("%0d\n", 0));

	printf("------------test13-------------\n");
	assert(ft_printf("%+..4..4hd\n", 0) == printf("%+..4..4hd\n", 0));

	printf("------------test14-------------\n");
	assert(ft_printf("|%020.0d|\n", 0) == printf("|%020.0d|\n", 0));

	printf("------------test15-------------\n");
	assert(ft_printf("|%0.d|\n", 0) == printf("|%0.d|\n", 0));

	printf("------------test16-------------\n");
	assert(ft_printf("%0d\n", -1) == printf("%0d\n", -1));

	printf("------------test17-------------\n");
	assert(ft_printf("%;+..4..4hd\n", -1) == printf("%;+..4..4hd\n", -1));

	printf("------------test18-------------\n");
	assert(ft_printf("%020.0d\n", -1) == printf("%020.0d\n", -1));

	printf("------------test19-------------\n");
	assert(ft_printf("%0.d\n", -1) == printf("%0.d\n", -1));

	printf("------------test20-------------\n");
	assert(ft_printf("%-+10.5d\n", 31) == printf("%-+10.5d\n", 31));

	printf("------------test21-------------\n");
	assert(ft_printf("%-+5.10d\n", 31) == printf("%-+5.10d\n", 31));

	printf("------------test22-------------\n");
	assert(ft_printf("%+10.5d\n", 31) == printf("%+10.5d\n", 31));

	printf("------------test23-------------\n");
	assert(ft_printf("%+5.10d\n", 31) == printf("%+5.10d\n", 31));

	printf("------------test24-------------\n");
	assert(ft_printf("%-+10.1dw\n", 31) == printf("%-+10.1dw\n", 31));

	printf("------------test25-------------\n");
	assert(ft_printf("%+10.1dw\n", 31) == printf("%+10.1dw\n", 31));

	printf("------------test26-------------\n");
	assert(ft_printf("% 5.10dw\n", 31) == printf("% 5.10dw\n", 31));

	printf("------------test27-------------\n");
	assert(ft_printf("%02.dw\n", 31) == printf("%02.dw\n", 31));

	printf("------------test28-------------\n");
	assert(ft_printf("% 10.dw\n", -31) == printf("% 10.dw\n", -31));

	printf("------------test29-------------\n");
	assert(ft_printf("%+10.hdw\n", 31) == printf("%+10.hdw\n", 31));
}

void	test_x(void)
{
	printf("*******************************\n");
	printf("************X_FORMAT***********\n");
	printf("*******************************\n\n");

	printf("------------test1-------------\n");
	assert(ft_printf("|%020x|\n", 1234) == printf("|%020x|\n", 1234));

	printf("------------test2-------------\n");
	assert(ft_printf("|%#0.20x|\n", 1234) == printf("|%#0.20x|\n", 1234));

	printf("------------test3-------------\n");
	assert(ft_printf("|%0.0x|\n", 1234) == printf("|%0.0x|\n", 1234));

	printf("------------test4-------------\n");
	assert(ft_printf("|%20.4x|\n", 1234) == printf("|%20.4x|\n", 1234));

	printf("------------test5-------------\n");
	assert(ft_printf("|%4.5x|\n", 1234) == printf("|%4.5x|\n", 1234));

	printf("------------test6-------------\n");
	assert(ft_printf("|%-20x|\n", 1234) == printf("|%-20x|\n", 1234));

	printf("------------test7-------------\n");
	assert(ft_printf("|%0x|\n", 0) == printf("|%0x|\n", 0));

	printf("------------test8-------------\n");
	assert(ft_printf("|%#x|\n", 0) == printf("|%#x|\n", 0));

	printf("------------test9-------------\n");
	assert(ft_printf("|%.1x|\n", 0) == printf("|%.1x|\n", 0));

	printf("------------test10-------------\n");
	assert(ft_printf("|%03.0x|\n", 0) == printf("|%03.0x|\n", 0));

	printf("------------test11-------------\n");
	assert(ft_printf("|%#5x|\n", 0) == printf("|%#5x|\n", 0));

	printf("------------test12-------------\n");
	assert(ft_printf("|%#-10x|\n", 0) == printf("|%#-10x|\n", 0));

	printf("------------test13-------------\n");
	assert(ft_printf("%+..4..4hd\n", 0) == printf("%+..4..4hd\n", 0));

	printf("------------test14-------------\n");
	assert(ft_printf("|%x|\n", 0) == printf("|%x|\n", 0));

	printf("------------test15-------------\n");
	assert(ft_printf("|%#x|\n", 0) == printf("|%#x|\n", 0));

	printf("------------test16-------------\n");
	assert(ft_printf("|%#-20.10x|\n", 0) == printf("|%#-20.10x|\n", 0));

	printf("------------test17-------------\n");
	assert(ft_printf("%;+..4..4hd\n", -1) == printf("%;+..4..4hd\n", -1));

	printf("------------test18-------------\n");
	assert(ft_printf("|%#.x|\n", 1234) == printf("|%#.x|\n", 1234));

	printf("------------test19-------------\n");
	assert(ft_printf("|%#-20x|\n", 1) == printf("|%#-20x|\n", 1));

	printf("------------test20-------------\n");
	assert(ft_printf("|%#20x|\n", 1) == printf("|%#20x|\n", 1));

	printf("------------test21-------------\n");
	assert(ft_printf("%#.10x\n", 1) == printf("%#.10x\n", 1));
}

void	test_b(void)
{
	printf("------------test1--------------\n");
	assert(ft_printf("|%20b|\n", 1) == printf("|%20b|\n", 1));
}