#include "ft_list.h"

t_list	*ft_create_elem(char *text, int data)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->text = text;
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}

void	ft_push_list(t_list **begin_list, char *text, int data)
{
	t_list *tail;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(text, data);
	}
	tail = (*begin_list);
	while ((*begin_list)->next)
	{
		(*begin_list) = (*begin_list)->next;
	}
	(*begin_list)->next = ft_create_elem(text, data);
}

void	ft_print_list(t_list **begin_list)
{
	int i;

	i = 0;
	while (*begin_list)
	{
		printf("%d) text = %s\ndata = %d\n", i, (*begin_list)->text, (*begin_list)->data);
		(*begin_list) = (*begin_list)->next;
		i++;
	}
}
