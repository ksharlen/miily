#ifndef MAIN_H
# define MAIN_H

# include <wchar.h>
# include <stdio.h>


typedef struct 	s_utf
{
	unsigned	unicode;
	int			bytes;
	unsigned	utf_sym;
}				t_utf;

int			def_num_bytes(wchar_t unicode);
t_utf		inst_mask(t_utf utf);
unsigned	set_bit(unsigned val, int num);
unsigned	set_bits(unsigned val, unsigned bits, int num);

#endif