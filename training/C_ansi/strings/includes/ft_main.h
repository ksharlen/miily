#ifndef FT_MAIN_H
# define FT_MAIN_H

# include "ft_std_header.h"

typedef struct		s_file
{
	struct s_file	*next;
	char 			data;
}					t_file;

static t_file       *ft_elem_create(char c);
void                ft_list(t_file ***list_begin, char c);
void                ft_read_stdin(t_file **list_begin);
size_t				ft_list_size(t_file *list_begin);
void                ft_print_list(t_file *begin_list);
char				*ft_list_to_str(t_file *begin_list);
void				ft_skip_space(char **str);
size_t              ft_space_count(char *p_str);
void                ft_main_space(char *str);

#endif
