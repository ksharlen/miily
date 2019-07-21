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

//!BEGIN_FAILD
int		ret;
int		ret_ft;

	//printf("%p\n", 0);
	//ft_printf("%p\n", 0);

	//printf("{%5p}\n", 0);
	//ft_printf("{%5p}\n", 0);

	printf("%#o", 42);
//!END_FAILD

//?BEGIN_DONE
	// ret_ft = ft_printf("%");
	// ret = printf("%");
	// assert(ret_ft == ret);
//?END_DONE

	// printf("ret = %d\n", ret);
	// printf("ret_ft = %d\n", ret_ft);
	return (0);
}