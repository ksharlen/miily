#include "ft_main.h"

void	ft_read_stdin(t_file **begin_list)
{
    char c;

	do
	{
		c = getchar();
		ft_list(&begin_list, c);
	} while (c != '\n');

}

void	ft_prin_list(t_file *begin_list)
{
	while (begin_list->next)
	{
		printf("%c", begin_list->data);
		begin_list = begin_list->next;
	}
}
