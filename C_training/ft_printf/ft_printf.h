/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/10 19:04:07 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>

# define SIZE_BUF			100
# define WRITE_BUF			NULL
# define GET_POINT			WRITE_BUF

/*
**sysNum
*/

# define BIN 				2
# define OCT 				8
# define HEX 				16

/*
**Flags
*/

/*
**HH
*/
# define ZERO				1

/*
**H
*/
# define PLUS				2

/*
**L
*/
# define DASH				4

/*
**LL
*/
# define SPACE				8

/*
**J
*/
# define HASH				16

/*
**Z
*/
# define DOT 				32

/*
**T
*/
# define DEC				64

/*
**big L for double
*/
# define STAR_ACC			128
# define STAR_WITH			256

/*
**Exeptions
*/
# define TYPE 				"dioOxXufeEgGaAnprkUDsScCbBvr"

# define NUM_INT 			"dDoxXuUibB"
# define NUM_DOUBLE 		"feEgGaA"
# define NUM_STRING			"scSc"
# define NUM_OTHER 			"nprkvr"

# define SIGNED_INT 		"dicCD"
# define UNSIGNED_INT 		"uxXoUbB"

# define UNDEF_BEH			"!\"&()/\\<=>?@[]^_`{}|~"
# define SIZE_MOD			"zjlht"

# define COLOR				"brgypw"
# define COLOR_F			"gih"

# define SUPPORT_INT 		"diouxXn"
# define SUPPORT_FLOAT 		"feEgGaAF"

# define TWO_POW_TWENTY_EIGHT	268435456
# define FIVE_POW_TWENTEEN	244140625

# define NUM_MOD(x)			((x) = (x > 0) ? x : -(x))
# define CHECK_MOD(x)			((x) > 0) ? (x) : -(x)

typedef union				s_uni
{
	long double				num;
	struct
	{
		unsigned long		mantissa:64;
		short int			exp:15;
		unsigned int		sign:1;
	}						bits;
}							t_uni;

typedef struct				s_long
{
	unsigned int			*nbr_int;
    unsigned int			*nbr_fract;
    unsigned int			*nbr_tmp;
	int						len_int;
    int						len_fract;
    int						len_tmp;
}							t_long;

typedef struct				s_spec
{
	int						flags;
	int						width;
	int						accuracy;
	unsigned int			mod;
	char					spec;
	int						ret_printf;
	int						size_buf;
	int						size_write;
	size_t					shift_spec;
	size_t					size_num;
	int						fd;
}							t_spec;

extern	t_spec				g_spec;

int							ft_printf(const char *format, ...);

int							ft_l_format(const int next_symbal);
int							ft_h_format(const int next_symbal);
int							ft_j_z_t_format(const int check_mod);
int							ft_big_l(const int check_mod);

void						ft_int_to_str(long long int num);
char						*ft_ptr_to_str(unsigned long long ptr);
void						ft_str_to_str(va_list format);
size_t						ft_base_depth(unsigned long long int num, int base);
void						ft_char_to_str(va_list format);
void						not_spec(void);

char						*ft_size_work(char *str, size_t size_num);
void						ft_work_to_format(const char *format, va_list form);
void						ft_work_spec_form(const char *format, va_list form);

int							ft_ismy(char form);

int							ft_str_size_num(const char *format);
int							ft_check_the_entry(const char *def_str,
const int sym);

void						ft_select_num_sys(va_list format);
char						*ft_work_buf(const char *inbuf, int size_inbuf);
void						ft_write_buf_and_clean(char *buf);
void						ft_other_spec(va_list format);
void						ft_double_to_str(va_list format);
void						ft_base_to_str(unsigned long long int num);
int							ft_color_format(const char *string);
void						invisible_sym(va_list format);
void						write_and_free_malloc(char *buf, size_t size_str);

void						write_to_file(va_list format);
int							ft_mem_rec_cmp_for_color(char *str1,
char *str2, size_t n);
void						ft_memset_buf(int sym, int size);
int							ft_check_loc_buf(int size);

void						ft_print_test(const char *form);

void						test_d(void);
void						test_o(void);
void						test_x(void);
void						test_s(void);
void						test_b(void);
void						test_other(void);
/*
**void						__TEST__return_printf(int flag);
**void						__TEST__check_ft_ismy(int flag);
*/

#endif
