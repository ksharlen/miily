#include "main.h"
#include "ft_printf.h"

t_spec	g_spec;



int		main(void)
{
	char *testing;
	size_t	len;
	// g_spec.size_write = 0;
	// g_spec.size_buf = SIZE_BUF;
	// data_to_str(4846846846848987987);
	len = ft_size_num(124123);
	printf("len = %ld\n", len);
	return (0);
}

//gcc -I ../ main.c src1.c src.c ../src/buf/buf.c libft.a