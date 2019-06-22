#include "stack.h"

void ft_push(int item, t_stack *obj)
{
	if (obj->tos > obj->size_stack)
	{
		printf("error stack overflow\n");
		return ;
	}
	else
		obj->num[++obj->tos] = item;
}

int	ft_pop(t_stack *obj)
{
	if (obj->tos < 0)
	{
		printf("stack empty\n");
		return (0);
	}
	else
		return (obj->num[obj->tos--]);
}