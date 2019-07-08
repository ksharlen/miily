#include "main.h"

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
	print_data(data);
	return (data);
}

static	t_data work_data(t_data data)
{
	if (data.min > 59)
	{
		
	}

	return (data);
}

static void	push_buf(t_data data)
{
	//ft_work_buf(...);
}

void	data_to_str(unsigned long long int num_data) //va_list format
{
	t_data	data;
	//unsigned long long int num_data;

	//num_data = get_va_arg(format);
	data = get_data(num_data, data);
	data = work_data(data);
}