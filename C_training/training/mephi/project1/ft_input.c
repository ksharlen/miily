/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:11:35 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/18 10:18:40 by ksharlen         ###   ########.fr       */
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
	do
	{
		ret_scanf = scanf("%d", &num);
		stdin_clean();
		if (ret_scanf == -1)
			ft_error(ERR_GET_INT);
		*one = num;
	}
	while (!ret_scanf || !(*one));
	return (num);
}

int			ft_input_data(t_matrix *elem)
{
	int index;
	int jindex;

	index = 0;
	while (index < elem->num_list)
	{
		printf("Введите кол-во элементов %d-ой строки: \n", index + 1);
		ft_get_int(&elem->elem->size_line);
		elem->elem[index].num = (int *)malloc(sizeof(int) * elem->elem->size_line);
		if (!elem->elem[index].num)
			ft_error(ERR_MEM);
		jindex = 0;
		while (jindex < elem->elem->size_line)
		{
			printf("Ввeдите %d-ый элемент:\n", jindex + 1);
			ft_get_int(&elem->elem[index].num[jindex++]);
		}
		index++;
	}
	return (0);
}

void		ft_num_line(t_matrix *elem)
{
	printf("Введите кол-во строк: \n");
	while (ft_get)
}