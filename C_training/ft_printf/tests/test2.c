/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:44:02 by cormund           #+#    #+#             */
/*   Updated: 2019/07/03 18:57:31 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

typedef struct				s_long
{
	int						*nbr;
	int						len;
}							t_long;

void        norma(int *num, int len, t_long *a)
{
    while (len--)
    {
        if (*num / 10)
        {
            if (len)
                *(num + 1) += *num / 10;
            else
            {
                *(num + 1) = *num / 10;
                ++(*a).len;
            }
            *num %= 10;
        }
        ++num;
    }
}

void        addition(t_long a, t_long b)
{
    int len;
    int *fresh;

    len = b.len;
    fresh = a.nbr;
    while (len--)
    {
        *a.nbr++ += *b.nbr++;
    }
    norma(fresh, a.len, &a);
    while (a.len--)
        printf("%d", fresh[a.len]);
}

int     main(int ac, char **av)
{
    t_long  a;
    t_long  b;
    int     len_a;
    int     len_b;

    a.len = ft_strlen(av[1]);
    len_a = a.len;
    b.len = ft_strlen(av[2]);
    len_b = b.len;
    a.nbr = (int *)malloc((a.len + 1) * sizeof(int));
    b.nbr = (int *)malloc((b.len) * sizeof(int));
    while(*av[1])
    {
        a.nbr[--len_a] = *av[1]++ - '0';
    }
    while(*av[2])
    {
        b.nbr[--len_b] = *av[2]++ - '0';
    }
    addition(a, b);
}