#include "main.h"
#include "ft_printf.h"

t_spec	g_spec;



int		main(void)
{
	char *testing;
	size_t	len;
	unsigned long long int a;

	a = 972502291532;
	g_spec.size_write = 0;
	g_spec.size_buf = SIZE_BUF;
	//date_to_str(199590856490);
	date_to_str(1);
	//len = ft_size_num(124123);
	//printf("len = %ld\n", len);
	return (0);
}

//gcc -I ../ main.c src1.c src.c ../src/buf/buf.c libft.a
//gcc -I ../ main.c src1.c src.c ../src/buf/buf.c ../src/buf/work_buf_by_hand.c libft.a q