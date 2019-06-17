/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:56 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/17 12:51:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void test()
{
	while ((c = getchar()))
}

static void			ft_error(char *s)
{
	perror(s);
	exit(0);
}

static void			ft_malloc(t_matrix *elem)
{
	elem->elem = (t_line *)malloc(sizeof(t_line) * elem->num_list);
	if (!elem->elem)
		ft_error(ERR_MEM);
}

static int			ft_get_int(int *one)
{
	int				ret_scanf;
	int				ret;
	char			sc[SIZE];

	ret_scanf = 0;
	while (!ret_scanf || !(*one))
	{
		ret_scanf = scanf("%s", sc);
		read(1, &sc[strlen(sc)], SIZE - strlen(sc - 1));
		if (ret_scanf == -1)
		{
			perror(ERR_GET_INT);
			exit(0);
		}
		(*one) = atoi(sc);
		if (!(*one))
			printf("Вы ввели неверное значение\n");
	}
	return (ret);
}

int					main(void)
{
	t_matrix 		elem;

	printf("Введите кол-во строк: \n");
	ft_get_int(&elem.num_list);
	//?Нужна проверка на верно введенное значение
	printf("elem.num = %d\n", elem.num_list);
	return (0);
}