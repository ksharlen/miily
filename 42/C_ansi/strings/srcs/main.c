//#include <stdio.h>
#include "ft_std_header.h"
#include "ft_main.h"

int		main(void)
{
	t_file 		*beg;
	size_t 		size;
	char 		*p_str;

	beg = NULL;
	ft_read_stdin(&beg);
	p_str = ft_list_to_str(beg);
	ft_main_space(p_str);
//	ft_skip_space(&main_str);
	printf("main_str = %s\n", p_str);
	
	return (0);
}
