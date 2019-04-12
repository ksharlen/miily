//#include <stdio.h>
#include "ft_std_header.h"
#include "ft_main.h"

int		main(void)
{
	t_file *beg;
	size_t size;
	char *p_str;

	beg = NULL;
	ft_read_stdin(&beg);
	p_str = ft_list_to_str(beg);
	printf("str = %s\n", p_str);
	return (0);
}
