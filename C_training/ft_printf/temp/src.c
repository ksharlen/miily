#include "main.h"
#include "../ft_printf.h"

// static void	get_va_arg(va_list format)
// {
// 	return (va_arg(format, unsigned long long int));
// }

static void print_data(t_data data)
{
	printf("min: %d\n", data.min);
	printf("hours: %d\n", data.hours);
	printf("day: %d\n", data.days);
	printf("mounths: %d\n", data.months);
	printf("years: %d\n", data.years);
}

t_data	get_data(unsigned long long int num_data, t_data data)
{
	(data.min = (num_data % 100)) && (num_data /= 100);
	(data.hours = (num_data % 100)) && (num_data /= 100);
	(data.days = (num_data % 100)) && (num_data /= 100);
	(data.months = (num_data % 100)) && (num_data /= 100);
	data.years = num_data;
	//print_data(data);
	return (data);
}

static	t_data work_data(t_data data)
{
	int		day_in_month;

	if (data.min > 59)
		(data.hours += (data.min / 60)) && (data.min %= 60);
	if (data.hours > 23)
		(data.days += (data.hours / 24)) && (data.hours %= 24);
	if (data.months > 12)
		(data.years += (data.months / 12)) && (data.months = (data.months % 12) + 1);
	day_in_month = get_quan_days(data.months);
	if (!day_in_month)
		day_in_month = get_leap(data.years);
	if (data.days > day_in_month)
		(data.months += (data.days / day_in_month)) && (data.days %= day_in_month);
	print_data(data);
	return (data);
}

static void	push_buf(t_data data)
{
	size_t len;
	char *str;
	char *temp;

	if (data.years > 0)
	{
		str = ft_itoa(data.years);
		len = ft_strlen(str);
		ft_work_buf(str, len);
		ft_work_buf("-", 1);
		ft_strdel(&str);
	}
	if (data.months < 10)
		ft_work_buf("0", 1);
		str = ft_itoa(data.months);
		len = ft_strlen(str);
		ft_work_buf(str, len);
		ft_work_buf("-", 1);
		ft_strdel(&str);
	if (data.days < 10)
		ft_work_buf("0", 1);
		str = ft_itoa(data.days);
		len = ft_strlen(str);
		ft_work_buf(str, len);
		//ft_work_buf("-", 1);
		ft_work_buf("T", 1);
		ft_strdel(&str);
	if (data.hours < 10)
		ft_work_buf("0", 1);
		str = ft_itoa(data.hours);
		len = ft_strlen(str);
		ft_work_buf(str, len);
		ft_work_buf(":", 1);
		ft_strdel(&str);
	if (data.min < 10)
		ft_work_buf("0", 1);
		str = ft_itoa(data.min);
		len = ft_strlen(str);
		ft_work_buf(str, len);
		ft_work_buf(":", 1);
		ft_strdel(&str);
}

void	data_to_str(unsigned long long int num_data) //va_list format
{
	t_data	data;
	//unsigned long long int num_data;

	//num_data = get_va_arg(format);
	data = get_data(num_data, data);
	data = work_data(data);
	push_buf(data);
	//print_data(data);
}