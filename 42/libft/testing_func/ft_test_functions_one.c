//#include "header"
#include "temp_header.h"

void	ft_print_numeric_array(const int *print_array, const size_t size_print_array)
{
	size_t i;

	if (!size_print_array)
	{
		printf("array does not printing\n");
		return ;
	}
	i = 0;
	while (i < size_print_array)
	{
		printf("print_numeric_array[%zu] = %c\n", i, print_array[i]);
		i++;
	}
}

void	*ft_testing_memset(void *buf, int value, size_t num)
{
	size_t	byte_shift;

	byte_shift = 0;
	while (byte_shift < num)
	{
		*((unsigned char *)buf + byte_shift++) = value;
	}
	return (buf);
}
