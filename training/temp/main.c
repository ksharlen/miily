/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:25:02 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/09 22:11:25 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int     main(void)
{
    int         fd;
    char buf[100];
    int     byte_read;

    byte_read = read(42, buf, 100);
    printf("byte_read = %d\n", byte_read);
    printf("buf = %s\n", buf);
    return (0);
}
