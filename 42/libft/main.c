#include "temp_header.h"

//ft_print_numeric_array();

int		main(void)
{
	char 	testing_memset_str[SIZE];
	char	memset_str[SIZE];
//	int		test_numeric[SIZE];
//	int		test_memset[SIZE];

	ft_testing_memset(testing_memset_str, 300, 16);
//	ft_print_numeric_array(testing_memset_str, 10);
	printf("testing_memset: \n%s\n", testing_memset_str);

	memset(memset_str, 300, 16);
//	ft_print_numeric_array(memset_str, 10);
	printf("memset: \n%s\n", memset_str);
	return (0);
}
