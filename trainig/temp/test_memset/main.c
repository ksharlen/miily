#include <stdio.h>
#include <memory.h>
#define SIZE_FOR_STR 50

int		main(void)
{
	int	a;
	int b;
	char str_test1[SIZE_FOR_STR] = "hello world how are yoU?";
	char str_test2[SIZE_FOR_STR] = "my in school 42 ksharlen";

	a = 42;
	b = 21;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("str_test1 = %s\n", str_test1);
	printf("str_test2 = %s\n", str_test2);

	ft_swap(str_test1, str_test2, strlen(str_test1));
	ft_swap(&a, &b, )

	return (0);
}
