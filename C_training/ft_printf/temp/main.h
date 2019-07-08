#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "libft.h"

typedef struct	s_data
{
	int			min;
	int			hours;
	int			days;
	int			months;
	int			years;
}				t_data;

void	data_to_str(unsigned long long int num_data);

#endif