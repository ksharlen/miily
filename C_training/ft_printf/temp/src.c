#include "main.h"

// static void	get_va_arg(va_list format)
// {
// 	return (va_arg(format, unsigned long long int));
// }

static void print_data(t_data data)
{
	printf("years: %d\n", data.years);
	printf("mounths: %d\n", data.months);
	printf("day: %d\n", data.days);
	printf("hours: %d\n", data.hours);
	printf("min: %d\n", data.min);
}

t_data	get_data(unsigned long long int num_data, t_data data)
{
	(data.min = (num_data % 100)) && (num_data /= 100);
	(data.hours = (num_data % 100)) && (num_data /= 100);
	(data.days = (num_data % 100)) && (num_data /= 100);
	(data.months = (num_data % 100)) && (num_data /= 100);
	data.years = num_data;
	return (data);
}

static	t_data work_data(t_data data)
{
	int		day_in_month;

	// print_data(data);
	// printf("=========\n");
	if (data.min > 59)
	{
		data.hours += (data.min / 60);
		data.min %= 60;
		// print_data(data);
		// printf("=========\n");
	}
	if (data.hours > 23)
	{
		data.days += (data.hours / 24);
		data.hours %= 24;
		// print_data(data);
		// printf("=========\n");
	}
	if (data.months > 12)
	{
		data.years += (data.months / 12);
		data.months = (data.months % 12) + 1;
		// print_data(data);
		// printf("=========\n");
	}
	day_in_month = get_quan_days(data.months);
	if (!day_in_month || day_in_month == 28)
		day_in_month = get_leap(data.years);

	//printf("day_int_month = %d\n",day_in_month);
	if (data.days > day_in_month)
	{
		data.months += (data.days / day_in_month);
		data.days %= day_in_month;
	}

	if (data.months > 12)
	{
		data.years += (data.months / 12);
		data.months = (data.months % 12);
	}
	// print_data(data);
	// printf("=========\n");
	if (data.months == 2)
	{
		if (((day_in_month = get_leap(data.years))))
			;
		else
			day_in_month = get_quan_days(data.months);
		(data.months += (data.days / day_in_month)) && (data.days %= day_in_month);
	}
	// print_data(data);
	// printf("=========\n");
	// print_data(data);
	// printf("=========\n");
	return (data);
}

static	void push_buf(int data, char sym)
{
	size_t len;
	char	*str;

	str = ft_itoa(data);
	len = ft_strlen(str);
	ft_work_buf(str, len);
	if (sym)
		ft_work_buf(&sym, 1);
	ft_strdel(&str);
}

static void	work_buf(t_data data)
{
	int iso_years;

	if ((iso_years = (4 - ft_size_num(data.years))) > 0)
		ft_memset_buf('0', iso_years);
		push_buf(data.years, '-');
		push_buf_sym_time(data.months, '0');
	//if (data.months < 10)
		//ft_work_buf("0", 1);
		push_buf(data.months, '-');
	if (data.days < 10)
		ft_work_buf("0", 1);
		push_buf(data.days, 'T');
	if (data.hours < 10)
		ft_work_buf("0", 1);
		push_buf(data.hours, ':');
	if (data.min < 10)
		ft_work_buf("0", 1);
		push_buf(data.min, 0);
	ft_write_buf_and_clean(WRITE_BUF);
}

void	data_to_str(unsigned long long int num_data) //va_list format
{
	t_data	data;
	//unsigned long long int num_data;

	//num_data = get_va_arg(format);
	data = get_data(num_data, data);
	data = work_data(data);
	work_buf(data);
	//print_data(data);
}