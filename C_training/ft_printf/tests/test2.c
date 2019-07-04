/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:44:02 by cormund           #+#    #+#             */
/*   Updated: 2019/07/04 16:41:08 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

typedef union				s_uni
{
	char				num;
	struct
	{
		unsigned int		b1:1;
        unsigned int		b2:1;
        unsigned int		b3:1;
        unsigned int		b4:1;
        unsigned int		b5:1;
        unsigned int		b6:1;
        unsigned int		b7:1;
		unsigned int		b8:1;
	}						bits;
}							t_uni;

// typedef struct				s_long
// {
// 	int						*nbr;
// 	int						len;
// }							t_long;

// void        norma(int *num, int len, t_long *a)
// {
//     while (len--)
//     {
//         if (*num / 10)
//         {
//             if (len)
//                 *(num + 1) += *num / 10;
//             else
//             {
//                 *(num + 1) = *num / 10;
//                 ++(*a).len;
//             }
//             *num %= 10;
//         }
//         ++num;
//     }
// }

// void        addition(t_long a, t_long b)
// {
//     int len;
//     int *fresh;

//     len = b.len;
//     fresh = a.nbr;
//     while (len--)
//     {
//         *a.nbr++ += *b.nbr++;
//     }
//     norma(fresh, a.len, &a);
//     while (a.len--)
//         printf("%d", fresh[a.len]);
// }

int     main(int ac, char **av)
{
    // t_long  a;
    // t_long  b;
    // int     len_a;
    // int     len_b;

    // a.len = ft_strlen(av[1]);
    // len_a = a.len;
    // b.len = ft_strlen(av[2]);
    // len_b = b.len;
    // a.nbr = (int *)malloc((a.len + 1) * sizeof(int));
    // b.nbr = (int *)malloc((b.len) * sizeof(int));
    // while(*av[1])
    // {
    //     a.nbr[--len_a] = *av[1]++ - '0';
    // }
    // while(*av[2])
    // {
    //     b.nbr[--len_b] = *av[2]++ - '0';
    // }
    // addition(a, b);

    t_uni u;

    u.num = 1;
    printf("num = %d\n", u.num);
    printf("b1 = %d\n", u.bits.b1);
    printf("b2 = %d\n", u.bits.b2);
    printf("b3 = %d\n", u.bits.b3);
    printf("b4 = %d\n", u.bits.b4);
    printf("b5 = %d\n", u.bits.b5);
    printf("b6 = %d\n", u.bits.b6);
    printf("b7 = %d\n", u.bits.b7);
    printf("b8 = %d\n", u.bits.b8);
}