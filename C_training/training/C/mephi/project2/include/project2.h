/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:25:30 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 08:48:10 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECT2_H
# define PROJECT2_H

# include "libft.h"

# define SIZE_WORD 19000

typedef struct		s_line
{
	char			line[SIZE_WORD];
	struct s_line	*next;
}					t_line;



#endif