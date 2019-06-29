/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/29 11:15:02 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>

# define SIZE_BUF			12000
# define WRITE_BUF			NULL
# define GET_POINT			NULL
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
# define DEC				64	/*T */
# define STAR_ACC			128 /*big L for double */
# define STAR_WITH			256
/*Exeptions */
# define TYPE 				"dioOxXufeEgGaAnprkUDsScC"
# define NUM_INT 			"dDoxXuUi"
# define NUM_DOUBLE 		"feEgGaA"
# define NUM_STRING			"scSc"
# define NUM_OTHER 			"nprk"
# define SIGNED_INT 		"dicCD"
# define UNSIGNED_INT 		"uxXoU"
# define UNDEF_BEH			"!\"&()/\\<=>?@[]^_`{}|~"
# define SIZE_MOD			"zjlht"

# define SUPPORT_INT 		"diouxXn"
# define SUPPORT_FLOAT 		"feEgGaAF"

# define NUM_MOD(x)			((x) = (x > 0) ? x : -(x))

typedef struct				s_spec
{
	int						flags;
	int						width;
	int						accuracy;
	unsigned int			mod;
	int						spec;
	int						ret_printf;
	int						size_buf;
	int						size_write;
	size_t					shift_spec;
	size_t					size_num;
}							t_spec;

extern	t_spec				g_spec;

int							ft_printf(const char *format, ...);

int							ft_l_format(const int next_symbal);
int							ft_h_format(const int next_symbal);
int							ft_j_z_t_format(const int check_mod);
int							ft_big_l(const int check_mod);

char						*ft_base_to_str(unsigned long long num, int base);
char						*ft_int_to_str(long long int num);
char						*ft_ptr_to_str(unsigned long long ptr);
size_t						ft_base_depth(unsigned long long int num, int base);
char						*ft_size_work(char *str);

void						ft_work_to_format(const char *format, va_list form);
void						ft_work_spec_form(const char *format, va_list form);
void						ft_control_var(va_list format);
char						*ft_control_fwa(const char *str);

long						ft_control_format_int(va_list form, char *type);
char						*ft_width(const char *str);
void						ft_error_find(const char *str, int line);
int							ft_ismy(char form);

int							ft_str_size_num(const char *format);
int							ft_check_the_entry(const char *def_str, const int sym);

void						ft_base_to_str_with_buf(unsigned long long num, int base, char *buf);
void						ft_str_to_str(char *inbuf);
void						ft_print_test(const char *form);
void						ft_char_to_str(char *sym);
void						ft_select_num_sys(void);
char						*ft_work_buf(const char *inbuf, int size_inbuf);
void						ft_write_buf_and_clean(char *buf);

void						__TEST__return_printf(int flag);
void						__TEST__check_ft_ismy(int flag);

#endif