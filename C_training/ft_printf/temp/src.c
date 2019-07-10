#include "main.h"

// static void	get_va_arg(va_list format)
// {
// 	return (va_arg(format, unsigned long long int));
// }

static void print_data(t_date data)
{
	printf("years: %d\n", data.years);
	printf("mounths: %d\n", data.months);
	printf("day: %d\n", data.days);
	printf("hours: %d\n", data.hours);
	printf("min: %d\n", data.min);
}

t_date	get_date(unsigned long long int num_date, t_date date)
{
	(date.min = (num_date % 100)) && (num_date /= 100);
	(date.hours = (num_date % 100)) && (num_date /= 100);
	(date.days = (num_date % 100)) && (num_date /= 100);
	(date.months = (num_date % 100)) && (num_date /= 100);
	date.years = num_date;
	return (date);
}

static	t_date work_data(t_date date)
{
	int		day_in_month;

	if (date.min > 59)
	{
		date.hours += date.min / 60;
		date.min %= 60;
	}
	if (date.hours > 23)
	{
		date.days += date.hours / 24;
		date.hours %= 24;
	}
	if (date.months > 12)
	{
		date.years += date.months / 12;
		date.months %= 12;
	}
	day_in_month = get_quan_days(date.months, date.years);
	printf("day_in_month = %d\n", day_in_month);
	print_data(date);
	// if (data.min > 59)
	// {
	// 	data.hours += (data.min / 60);
	// 	data.min %= 60;
	// }
	// if (data.hours > 23)
	// {
	// 	data.days += (data.hours / 24);
	// 	data.hours %= 24;
	// }
	// if (data.months > 12)
	// {
	// 	data.years += (data.months / 12);
	// 	data.months = (data.months % 12) + 1;
	// }
	// day_in_month = get_quan_days(data.months);
	// if (!day_in_month || day_in_month == 28)
	// 	day_in_month = get_leap(data.years);

	// if (data.days > day_in_month)
	// {
	// 	data.months += (data.days / day_in_month);
	// 	data.days %= day_in_month;
	// }

	// if (data.months > 12)
	// {
	// 	data.years += (data.months / 12);
	// 	data.months = (data.months % 12);
	// }
	// if (data.months == 2)
	// {
	// 	if (((day_in_month = get_leap(data.years))))
	// 		;
	// 	else
	// 		day_in_month = get_quan_days(data.months);
	// 	(data.months += (data.days / day_in_month)) && (data.days %= day_in_month);
	// }
	return (date);
}

static	void push_buf(int date, char sym)
{
	size_t len;
	char	*str;

	str = ft_itoa(date);
	len = ft_strlen(str);
	ft_work_buf(str, len);
	if (sym)
		ft_work_buf(&sym, 1);
	ft_strdel(&str);
}

static void	work_buf(t_date date)
{
	int iso_years;

	if ((iso_years = (4 - ft_size_num(date.years))) > 0)
		ft_memset_buf('0', iso_years);
		push_buf(date.years, '-');
		push_buf_sym_time(date.months, '0');
		push_buf(date.months, '-');
		push_buf_sym_time(date.days, '0');
		push_buf(date.days, 'T');
		push_buf_sym_time(date.hours, '0');
		push_buf(date.hours, ':');
		push_buf_sym_time(date.min, '0');
		push_buf(date.min, 0);
	ft_write_buf_and_clean(WRITE_BUF);
}

void	date_to_str(unsigned long long int num_date) //va_list format
{
	t_date	date;
	//unsigned long long int num_data;

	//num_data = get_va_arg(format);
	date = get_date(num_date, date);
	date = work_data(date);
	work_buf(date);
	//print_data(data);
}