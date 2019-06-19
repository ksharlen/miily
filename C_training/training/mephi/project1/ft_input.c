/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:11:35 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 10:23:40 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void 		stdin_clean(void)
{
	int c;

	while (((c = getchar()) != '\n') && (c != EOF))
		;
}

void			ft_error(char *s)
{
	perror(s);
	exit(0);
}

int			ft_get_int(int *one)
{
	int				ret_scanf;
	int				ret;
	int				num;

	ret_scanf = 0;
	num = 0;
	ret_scanf = scanf("%d", &num);
	stdin_clean();
	if (ret_scanf == EOF)
		ft_error(ERR_GET_INT);
	*one = num;
	return (ret_scanf);
}

int			ft_input_data(t_matrix *elem)
{
	int 	index;
	int 	jindex;
	int		ret_get_int;

	index = 0;
	while (index < elem->num_list)
	{
		printf("Введите кол-во элементов %d-ой строки: \n", index + 1);
		ft_num_line(&elem->elem[index].size_line);
		elem->elem[index].num = (int *)ft_malloc(sizeof(int) * elem->elem[index].size_line);
		jindex = 0;
		while (jindex < elem->elem[index].size_line)
		{
			printf("Ввeдите %d-ый элемент:\n", jindex + 1);
			ft_num_val(&elem->elem[index].num[jindex++]);
		}
		index++;
	}
	return (0);
}

void		ft_num_line(int *val)
{
	int		ret_get_int;

	do
	{
		//printf("Введите кол-во строк: \n");
		ret_get_int = ft_get_int(val);
		if ((*val) < 1)
			printf("вы ввели неверное значение, повторите попытку!!!\n");
	}
	while ((*val) < 1 || !ret_get_int);
}

void		ft_num_val(int *num_val)
{
	int		ret_scanf;

	do
	{
		//printf("Введите кол-во эелментов строки: \n");
		ret_scanf = ft_get_int(num_val);
		if (!ret_scanf)
			printf("Вы ввели неправильное значение\n");
	}
	while (!ret_scanf);
}