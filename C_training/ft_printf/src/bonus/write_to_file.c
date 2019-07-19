/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:02:41 by cormund           #+#    #+#             */
/*   Updated: 2019/07/18 17:12:04 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_to_file(va_list format)
{
	int	fd;

	fd = va_arg(format, int);
	if (fd > 0)
		g_spec.fd = fd;
}
