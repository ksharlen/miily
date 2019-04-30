#include <stdio.h>
#include "libft.h"
#include <string.h>

int		main(void)
{
	char *data = "hello, i'm a data";
	t_list *l = ft_lstnew(NULL, 5);
	int temp;

	printf("data = %s\n", data);
	printf("l = %s\n", l->content);
	temp = ft_strcmp(data, l->content);
	printf("cmp = %d\n", temp);

/*	if (!strcmp(data, l->content))
	{
		free(l->content);
		free(l);
		exit(TEST_SUCCESS);
	}
*/
	return (0);
}
