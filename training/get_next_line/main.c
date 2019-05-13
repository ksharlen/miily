/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:25:02 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/13 18:51:50 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
//#include <project.h>

int     main(void)
{
	int fd;
	int ret;
	char *line;

	line = NULL;
	fd = open("serc", O_RDONLY);
	ret = get_next_line(fd, &line);
	printf("line = %s	ret = %d\n", line, ret);
	ft_strdel(&line);
	// fd = open("test", O_RDONLY);
	// ret = get_next_line(fd, &line);
	// printf("line = %s	ret = %d\n", line, ret);
	// ft_strdel(&line);
	return (0);
}
