#include "stack.h"

int main(void)
{
	t_stack obj;
	int 	val;
	size_t	i;

	i = 0;
	obj.tos = -1;
	printf("Введите кол-во элементов стека: ");
	do
	{
		scanf("%d", &obj.size_stack);
		if (obj.size_stack <= 0)
		{
			printf("inncorrect size\n");
		}
	}while (obj.size_stack <= 0);
	obj.num = malloc(sizeof(int) * obj.size_stack);

	while (i < obj.size_stack)
	{
		scanf("%d", &val);
		ft_push(val, &obj);
		++i;
	}
	printf("tos = %d\n", obj.tos);
	i = 0;
	while (i < obj.size_stack)
	{
		printf("%ld) %d\n", i, ft_pop(&obj));
		i++;
	}
}