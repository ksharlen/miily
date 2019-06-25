/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/25 14:29:06 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

# define SIZE_BUF_PRINTF 	12000
/*SysNum */
# define BIN 				2
# define OCT 				8
# define DECIMAL 			10
# define HEX 				16
/*Flags */
# define ZERO				1	/*HH */
# define PLUS				2	/*H */
# define DASH				4	/*L */
# define SPACE				8	/*LL */
# define HASH				16	/*J */
# define DOT 				32	/*Z */
# define DEC				64
/*Exeptions */
# define TYPE 				"dioOxXufeEgGaAnprkUD"
# define NUM_INT 			"dDoxXcCuUi"
# define SIGNED_INT 		"dicCD"
# define UNSIGNED_INT 		"uxXoU"
# define NUM_DOUBLE 		"feEgGaA"
# define NUM_OTHER 			"nprk"
# define UNDEF_BEH			"!\"&()/\\<=>?@[]^_`{}|~"
# define SIZE_MOD			"zjlh"

# define SUPPORT_INT 		"diouxXn"
# define SUPPORT_FLOAT 		"feEgGaAF"

typedef struct				s_spec
{
	int						flags;
	int						spec;
	int						width;
	int						accuracy;
	int						ret_printf;
	int						paste;
	char					*size_type;
	size_t					size_buf;
	size_t					shift_spec;
	size_t					size_write;
	size_t					size_spec;
	size_t					size_num;
	unsigned int			mod;
}							t_spec;

extern	t_spec				g_spec;

int							ft_printf(const char *format, ...);

void						ft_l_format(const char *format);
void						ft_h_format(const char *format);
void						ft_j_format(const char *format);
void						ft_z_format(const char *format);
void						ft_l_big_format(const char *format);

char						*ft_base_to_str(unsigned long long num, int base);
char						*ft_int_to_str(long long int num);
char						*ft_ptr_to_str(unsigned long long ptr);
size_t						ft_base_depth(unsigned long long int num, int base);

int							ft_work_to_format(const char *format, char *buf_printf, va_list form);
int							ft_control_spec(const char *format);
void						ft_control_var(char *buf_printf, va_list format);
char						*ft_control_fwa(const char *str);

long						ft_control_format_int(va_list form, char *type);
char						*ft_width(const char *str);
void						ft_error_find(const char *str, int line);

#endif