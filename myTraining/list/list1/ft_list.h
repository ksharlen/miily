#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	char 		*text;
	int 		data;
}			t_list;

t_list			*ft_create_elem(char *text, int data);
void			ft_push_list(t_list **begin_list, char *text, int data);
void	ft_print_list(t_list **begin_list);
#endif
