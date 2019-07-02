/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:49:37 by marvin            #+#    #+#             */
/*   Updated: 2019/06/13 09:47:27 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void			test(char *dirname)
{
	DIR 			*dir;
	struct dirent 	*entry;

	dir = opendir(dirname);
	while ((entry = readdir(dir)))
	{
		if (entry->d_name[0] == '.')
			continue;
		printf("%s  ", entry->d_name);
	}
	printf("\n");
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
	{
		test(argv[1]);
	}
	if (argc == 1)
	{
		test(".");
	}
	return (0);
}