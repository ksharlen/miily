#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "../ft_printf.h"

typedef struct	s_date
{
	int			min;
	int			hours;
	int			days;
	int			months;
	int			years;
}				t_date;

void	date_to_str(unsigned long long int num_date);
int		get_quan_days(int month, int years);
int		get_leap(int years);
void	push_buf_sym_time(int num, char sym);
t_date	get_date(unsigned long long int num_date, t_date date);
void	check_ovf_to_time(int *num, int *num1, int ovf, int check);
void	check_ovf_to_date(int *num, int *num1, int ovf, int check);

#endif