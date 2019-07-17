#ifndef MAIN_H
# define MAIN_H

# include <wchar.h>
# include <stdio.h>


typedef struct 	s_utf
{
	wchar_t		unicode;
	int			bytes;
	unsigned	utf_sym;
}				t_utf;

int				def_num_bytes(wchar_t unicode);
t_utf			inst_mask(t_utf utf);
unsigned		set_bit(unsigned val, int num);
unsigned		set_bits(unsigned val, unsigned bits, int num);
unsigned 		set_bits_in(unsigned value, unsigned inval, int num);
unsigned		bitcpy(unsigned dest, unsigned from, int num, int pos);
unsigned char	get_6_bits(unsigned unicode);
t_utf			work_utf(t_utf utf);

#endif