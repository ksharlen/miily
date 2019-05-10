/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:25:02 by ksharlen          #+#    #+#             */
/*   Updated: 2019/05/10 16:20:26 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int     main(void)
{
    ssize_t byte_read;
    char buf[50];

    byte_read = read(0, buf, 50);
    buf[byte_read] = '\0';
    printf("byte_read = %ld\n", byte_read);
    printf("buf = %s\n", buf);
    return (0);
}
