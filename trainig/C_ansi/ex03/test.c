#include <stdio.h>

int		ft_res(int a, int b);
int		ft_check_sort(int *arr, int size, int (*f)(int, int));

int		main(void)
{
	int arr[] = { 5, 4, 3, 2, 1 };
	int res;

	res = ft_check_sort(arr, 5, &ft_res);
	if (res)
		printf("array full sort\n");
	else
		printf("array is not sort\n");
	return (0);
}

/***По возрастанию***/
int		ft_res(int a, int b)
{
	int res;

	res = 0;
	if (a >= b)
		res = 1;
	return (res);
}

int		ft_check_sort(int *arr, int size, int (*test_sort)(int, int))
{
	int i;
	int flag;

	flag = 1;
	i = 0;
	while (i < size - 1)
	{
		if (!(test_sort(arr[i], arr[i + 1])))
			flag = 0;
		i++;
	}
	return (flag);
}
