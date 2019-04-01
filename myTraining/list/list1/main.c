#include "ft_list.h"

int	main(void)
{
	char *str;
	int data;
	t_list *beg;

	beg = NULL;
	while (1)
	{
		printf("write your text: (text)\n");
		gets(str);
		scanf("*c");
		printf("write your number: (data)\n");
		scanf("%d", &data);
		if (data == 0)
			break;
		ft_push_list(&beg, str, data);
	}
	ft_print_list(&beg);
	return (0);
}
