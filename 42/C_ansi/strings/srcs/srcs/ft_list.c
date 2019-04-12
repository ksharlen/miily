#include "ft_main.h"

static t_file	*ft_elem_create(char c)
{
	t_file *new;

	new = (t_file *)malloc(sizeof(t_file));
	if (!new)
	{
		printf("can not to memory\n");
		exit(0);
	}
	else
	{
		new->data = c;
		new->next = NULL;
	}
	return (new);
}

void	ft_list(t_file ***list_begin, char c)
{
	t_file *res;

	res = (**list_begin);
	if (!(**list_begin))
	{
		(**list_begin) = ft_elem_create(c);
	//	(*list_begin)->next = NULL;
	}
	else
	{
		while (res->next)
			res = res->next;
		res->next = ft_elem_create(c);
	}
}

size_t	ft_list_size(t_file *begin_list)
{
	int size;

	size = 0;
	while (begin_list->next)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}
