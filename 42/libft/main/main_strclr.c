#include "ft_std_header.h"

int		main(void)
{
	char str[SIZE] = "";

//	fgets(str, SIZE, stdin);
	printf("str = %s\n", str);
	ft_strclr(str);
	printf("str = %s\n", str);
//	printf("str[0] = %d", str[0]);
	return (0);
}
