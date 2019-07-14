/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/14 14:27:03 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
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
//# define TYPE 				"dioOxXufeEgGaAnprkUDsScCbBvr"

# define NUM_INT 			"dDoOxXuUibB"
# define NUM_DOUBLE 		"fFeEgGaA"
# define NUM_STRING			"scSC" //!Проверить тут
# define NUM_OTHER 			"nprkv"

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
# define CHECK_MOD(x)		((x) > 0) ? (x) : -(x)

typedef struct				s_date
{
	int						min;
	int						hours;
	int						days;
	int						months;
	int						years;
}							t_date;

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

int							l_format(const int next_symbal);
int							h_format(const int next_symbal);
int							j_z_t_format(const int check_mod);
int							big_l(const int check_mod);

void						int_to_str(long long int num);
char						*ptr_to_str(unsigned long long ptr);
void						str_to_str(va_list format);
size_t						base_depth(unsigned long long int num, int base);
void						char_to_str(va_list format);
char						chr_space_plus_dec(void);
void						not_spec(void);

char						*size_work(char *str, size_t size_num);
void						work_to_format(const char *format, va_list form);
void						work_spec_form(const char *format, va_list form);

int							ismy(char form);

int							str_size_num(const char *format);
int							check_the_entry(const char *def_str,
const int sym);

void						select_num_sys(va_list format);
char						*work_buf(const char *inbuf, int size_inbuf);
void						write_buf_and_clean(char *buf);
void						other_spec(va_list format);
void						double_to_str(va_list format);
void						base_to_str(unsigned long long int num);
int							color_format(const char *string);
void						invisible_sym(va_list format);
void						write_and_free_malloc(char *buf, size_t size_str);

void						write_to_file(va_list format);
int							mem_rec_cmp_for_color(char *str1,
char *str2, size_t n);
void						memset_buf(int sym, int size);
int							check_loc_buf(int size);

void						ft_print_test(const char *form);

void						date_to_str(va_list);
int							get_quan_days(int month, int years);
int							get_leap(int years);
void						push_buf_sym_time(int num, char sym);
t_date						get_date(unsigned long long int num_date, t_date date);
void						check_ovf_to_time(int *num, int *num1, int ovf, int check);
void						check_ovf_to_date(int *num, int *num1, int ovf, int check);

void						test_d(void);
void						test_o(void);
void						test_x(void);
void						test_s(void);
void						test_b(void);
void						test_f(void);
void						test_other(void);
/*
**void						__TEST__return_printf(int flag);
**void						__TEST__check_ismy(int flag);
*/

#endif
