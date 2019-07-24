#include "ft_printf.h"
#include <math.h>

int		main(void)
{
	long a;
	long *p_a;

	p_a = &a;
	//ft_printf("%#025b", 4123);
	//ft_printf("hello world%zn how are you?\n", p_a);
	//printf("a = %d\n", *p_a);

	// ft_printf("%ls", L"Привет мир!!!\n");
	// ft_printf("%S", L"Привет еще раз мир!!!\n");
	// ft_printf("%ls", L"Привет мир!!!\n");
	// ft_printf("%S", L"Привет еще раз мир!!!\n");
	// ft_printf("%ls", L"Привет мир!!!\n");
	// ft_printf("%S", L"Привет еще раз мир!!!\n");
	// ft_printf("%ls", L"Привет мир!!!\n");
	// ft_printf("%S", L"Привет еще раз мир!!!\n");
	// ft_printf("%S", L"test");
	// test_d();
	// test_o();
	// test_x();
	// test_b();
	// test_other();
	// test_c();
	// test_s();

	// ft_printf("%lc", L'П');

	//ft_printf("%S", L"Привет мир");

	//ft_printf("%c", 'g');

	// printf("%.4d\n", 42);
	// ft_printf("%.4d\n", 42);

// printf("%u\n", -42);
// ft_printf("%u\n", -42);

//!BEGIN_FAILD
int		ret;
int		ret_ft;

	//ret = printf("%s %s %s\n", "this", "is", "a");
	// ret_ft = ft_printf("%s %s %s\n", "this", "is", "a");
	// printf("ret_ft = %d\n", ret_ft);
	//printf("ret = %d\nret_ft = %d\n", ret, ret_ft);
	//printf("%p\n", 0);
	//ft_printf("%p\n", 0);

	//printf("{%5p}\n", 0);
	//ft_printf("{%5p}\n", 0);

	//printf("%#o", 42);
	// printf("%c\n", 200);
	// ft_printf("%c\n", 200);
//!END_FAILD

	// ret = ft_printf("% ");
	// printf("ret = %d\n", ret);

	// ft_printf("%05%\n");

//?BEGIN_DONE
	// printf("%c\n", 200);
	// ft_printf("%c\n", 200);
	// ret_ft = ft_printf("%");
	// ret = printf("%");
	// assert(ret_ft == ret);

	//printf("{%.*s}", -5, "42");
	//ft_printf("{%.*s}", -5, "42");

	//printf("{%05.*d}", -15, 42);
	//ft_printf("{%05.*d}", -15, 42);
//?END_DONE

	// printf("ret = %d\n", ret);
	// printf("ret_ft = %d\n", ret_ft);
	// printf("\\!/%61.31le\\!/\n", 0.000000000000000000000000434535353534535345345345345345345345);
	// ft_printf("\\!/%61.31le\\!/\n", 0.000000000000000000000000434535353534535345345345345345345345);

	printf("|%.2lG|\n", 0.0000000000005);
	ft_printf("|%.2lG|\n", 0.0000000000005);
	return (0);
}