#include "my_sorts.h"

void	ft_insert_sort(int *num, size_t size)
{
	size_t	i;
	size_t	index;
	int		value;

	i = 1;
	while (i < size)
	{
		value = num[i];
		index = i;
		while (index > 0 && (num[index - 1] > value))
		{
			num[index] = num[index - 1];
			--index;
		}
		num[index] = value;
		i++;
	}
}

void	ft_select_sort(int *num, size_t size)
{
	size_t	i;
	size_t	index;
	int		temp;

	i = 0;
	while (i < size)
	{
		index = i + 1;
		while (index < size)
		{
			if (num[index] < num[i])
			{
				temp = num[i];
				num[i] = num[index];
				num[index] = temp;
			}
			++index;
		}
		i++;
	}
}
