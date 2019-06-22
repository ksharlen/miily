#ifndef STACK_H
# define STACK_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct 	s_stack
{
	int 		tos;
	int 		*num;
	int 		size_stack;
}				t_stack;

void 			ft_push(int item, t_stack *obj);
int				ft_pop(t_stack *obj);

#endif