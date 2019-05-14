/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:25:02 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/14 18:14:06 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

#define BUFF_SIZE 100
//#include <project.h>

int     main(void)
{
	char *line;
	char s[BUFF_SIZE];
	int fd;
	int fd2;
	int fd3;
	int	diff_file_size;
	int ret;

    system("mkdir -p sandbox");
	system("openssl rand -base64 $((30 * 1000 * 3/4)) | tr -d '\n' | tr -d '\r' > sandbox/one_big_fat_line.txt");
	system("echo '\n' >> sandbox/one_big_fat_line.txt");

	fd = open("sandbox/one_big_fat_line.txt", O_RDONLY);
	fd2 = open("sandbox/one_big_fat_line.txt.mine", O_CREAT | O_RDWR | O_TRUNC, 0755);

	//ret = get_next_line(fd, &line);
	//printf("line = %s	ret = %d\n", line, ret);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("ret = %d\n", ret);
	    write(fd2, line, strlen(line));
	    write(fd2, "\n", 1);
	}
	printf("ret = %d\n", ret);
	if (line)
		write(fd2, line, strlen(line));
	close(fd);
	close(fd2);

	system("diff sandbox/one_big_fat_line.txt sandbox/one_big_fat_line.txt.mine > sandbox/one_big_fat_line.diff");
	fd3 = open("sandbox/one_big_fat_line.diff", O_RDONLY);
	diff_file_size = read(fd3, NULL, 10);
	close(fd3);

	printf("diff = %d\n", diff_file_size);
	assert(diff_file_size == 0);
	return (0);
}
