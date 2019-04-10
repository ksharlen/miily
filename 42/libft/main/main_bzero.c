#include "ft_mem_header.h"

int		main(void)
{
	char 	bzero_str_test[SIZE] = "hello world";
	char 	ft_bzero_str_test[SIZE] = "hello world";
	char 	*p_bzero;
	char 	*p_ft_bzero;
	int		bzero_int_test[SIZE] = { 1, 2, 3, 4, 5 };
	int		ft_bzero_int_test[SIZE] = { 1, 2, 3, 4, 5 };
	int		*p_int_bzero;
	int		*p_int_ft_bzero;

//STR
	p_bzero = (bzero_str_test + 4);
	p_ft_bzero = (ft_bzero_str_test + 4);
	bzero(p_bzero, 4);
	ft_bzero(p_ft_bzero, 4);
	printf("bzero_str_test: %s\n", bzero_str_test);
	printf("ft_bzero_str_test: %s\n", ft_bzero_str_test);
//INT
	p_int_bzero = (bzero_int_test + 2);
	p_int_ft_bzero = (ft_bzero_int_test + 2);
	bzero(p_int_bzero, 1);
	ft_bzero(p_int_ft_bzero, 1);
	ft_print_numeric_array(bzero_int_test, 5);
	ft_print_numeric_array(ft_bzero_int_test, 5);	
	return (0);
}
