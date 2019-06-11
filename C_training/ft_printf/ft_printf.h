/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/11 14:18:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

# define BIN 2
# define OCT 8
# define DECIMAL 10
# define HEX 16
# define TYPE "dioOxXufeEgGaAnprkUD"
# define NUM_INT "dDoOxXcCuUi"
# define NUM_DOUBLE "feEgGaA"
# define NUM_OTHER "nprk"
# define SIZE_BUF_PRINTF 20
# define ZERO	1
# define PLUS	2
# define DEC	4
# define SPACE	8
# define HASH	16
# define DOES_NOT_SUPPORT_LONG "nprkeEgGaAD"
# define DOES_NOT_SUPPORT_SHORT "feEgGaAnprkD"
# define DOES_NOT_SUPPORT_INT_MAX "feEgGaAnprkUDxXoOuUnprk"
# define DOES_NOT_SUPPORT_LONG_FLOAT "dioOxXunprkDUaA"
# define DOES_NOT_SUPPORT_SIZE_T "feEgGaAnprk"
# define DOES_NOT_SUPPORT_L "dioOxXunprkDU"
# define MOD_NUM(x) (((x) > 0) ? (x) : -(x))

typedef struct			s_spec
{
	int					flags;
	int					mod;
	int					width;
	int					accuracy;
	size_t				ret_printf;
	size_t				shift_spec;
	size_t				size_write;
	int					paste;
	size_t				size_spec;
}						t_spec;

extern	t_spec			g_spec;

int						ft_printf(const char *format, ...);
void					ft_error_find(const char *str, int line);
char					*ft_work_to_format(const char *format, char *buf_printf, va_list form);
long					ft_control_format_int(va_list form, char *type);
int						ft_control_spec(const char *format);
char					*ft_l_format(const char *format);
char					*ft_h_format(const char *format);
char					*ft_j_format(const char *format);
char					*ft_z_format(const char *format);
char					*ft_l_big_format(const char *format);
char					*ft_num2binary(long int num);
char					*ft_num2hex_or_oct(long long int num, int base);
void					ft_control_var(char *buf_printf, va_list format, char *type);
long long int			ft_num_int(va_list form, char *type);
size_t					ft_base_depth(long long int num, int base);

#endif
