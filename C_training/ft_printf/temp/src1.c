#include "main.h"

void	push_buf_sym_time(int num, char sym)
{
	if (num < 10)
		ft_work_buf(&sym, 1);
}

int		get_leap(int years)
{
	int day_in_month;

	if (!(years % 400))
		day_in_month = 29;
	else if (!(years % 100))
		day_in_month = 28;
	else if (!(years % 4))
		day_in_month = 29;
	else
		day_in_month = 28;
	return (day_in_month);
}

int		get_quan_days(int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
		return (31);
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return (30);
	else if (month == 2)
		return (28);
	else
		return (0);
}