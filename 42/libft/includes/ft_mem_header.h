/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:27:36 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/07 13:44:46 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_HEADER_H
# define FT_MEM_HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <memory.h>

# define SIZE 50

void	*ft_memset(void	*buf, int value, size_t num);
void    ft_print_numeric_array(const void *print_array, const size_t size_print_array);

#endif
