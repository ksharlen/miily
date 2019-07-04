#include "hash_map.h"

t_list	*create_list(void)
{
	t_list	*ret;

	if (!(ret = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ret->head = NULL;
	ret->tail = NULL;
	ret->size = 0;
	return (ret);
}

t_node	*create_node(int key, char *value)
{
	t_node	*ret;

	if (!(ret = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	ret->key = key;
	ret->value = value;
	ret->next = NULL;
	return (ret);
}

void	add_node(t_list *list, t_node *node)
{
	if (list && list->size == 0)
		list->head = node;
	else
	{
		t_node *run = list->head;
		while (run)
		{
			if (node->key == run->key)
			{
				run->value = node->value;
				return ;
			}
			run = run->next;
		}
		list->tail->next = node;
	}
	list->tail = node;
	list->size++;
}
