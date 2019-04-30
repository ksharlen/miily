#include "ft_main.h"

char	*ft_list_to_str(t_file *begin_list)
{
	char *main_str;
	size_t i;
	size_t size;
	size_t sym_zero;
	
	sym_zero = 1;
	i = 0;
	size = ft_list_size(begin_list);
	main_str = (char *)malloc(sizeof(char) * size + sym_zero);
	while (i < size)
	{
		main_str[i] = begin_list->data;
		i++;
		begin_list = begin_list->next;
	}
	main_str[i] = '\0';
	return (main_str);
}

