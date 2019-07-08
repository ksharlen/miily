#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_data
{
	int			min;
	int			hours;
	int			days;
	int			months;
	int			years;
}				t_data;

typedef enum	e_mounth
{
	JAN = 31,
	MAR = 31,
	APR = 30,
	MAY = 31,
	JUN = 30,
	JUL = 31,
	AUG = 31,
	SEP = 30,
	OCT = 31,
	NOV = 30,
	DECEMBER = 31,
}				t_mounth;

void	data_to_str(unsigned long long int num_data);
int		get_quan_days(int month);
int		get_leap(int years);

#endif