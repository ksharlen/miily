#include <capture.h>
#include "testing.h"

int		main(void)
{
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

	ret = printf("%");
	ret_ft = ft_printf("%");
//!END_FAILD


	printf("%d", __VA_ARGS__);
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

	// ret = printf("%");
	// ret_ft = ft_printf("%");

	// printf("ret_ft = %d\nret = %d\n", ret_ft, ret);

	// ret_ft = ft_printf("% lh123");
	// printf("ret_ft = %d\n", ret_ft);
	// printf("spec = %d\n", g_spec.spec);

	// ret = printf("%");
	// ret_ft = ft_printf("%");

	// printf("ret = %d\nret_ft = %d\n", ret, ret_ft);

	//assert(printf("%") == ft_printf("%"));
	//printf("hello world");
	// ret = ft_printf("%c", 13);
	// printf("ret = %d\n", ret);
	// printf("ret = %d\n", ret);
	// printf("ret_ft = %d\n", ret_ft);

	//printf("testing\n");

	return (0);
}