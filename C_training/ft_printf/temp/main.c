/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/05 08:22:46 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>
#define printErrord(errorCode) printError(errorCode, "No message")

void printError(int errorCode, char *msg)
{
	printf("Error code: %d (%s)\n", errorCode, msg);
}

int		main(void)
{
	printError(9, "Bad alloc");
	printErrord(8);
}
