#include "ft_printf.h"
#include <assert.h>
#include <unistd.h>

int		main(void)
{
	int a;

	//assert(ft_printf("s: %s, p: %p, d:%d\n", "a string", &a, 42) == printf("s: %s, p: %p, d:%d\n", "a string", &a, 42));
	//ft_printf("%p\n", &a);
	//ft_printf("%p\n", &a);
	//printf("%p\n", &a);
	//ft_printf("%p", &a);
	//assert(ft_printf("{%s}", 0) == printf("{%s}", 0));
	// ft_printf("{%10s}\n", 0);
	//printf("{%s}\n", 0);
	// printf("{%10s}\n", 0);
	//write(1, NULL, 10);

	int ret_ft;
	int ret;

	ret = printf("%");
	ret_ft = ft_printf("%");
	ft_printf("ret = %d\n", ret);
	return (0);
}