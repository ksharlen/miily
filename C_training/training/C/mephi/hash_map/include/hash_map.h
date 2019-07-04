#ifndef HASH_MAP
# define HASH_MAP

# define ABS(x) ((x) = (x > 0) ? (x) : -(x))

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct      s_node
{
    int             key;
    char            *value;
    struct s_node   *next;
}                   t_node;

typedef struct      s_list
{
    t_node          *head;
    t_node          *tail;
    int             size;
}					t_list;

typedef struct 		s_hash_map
{
	size_t			size_map;
	t_list			**map;
}					t_hash_map;


t_list				*create_list(void);
t_node				*create_node(int key, char *value);
void				put(int key, char *value, t_hash_map *hash_map);
void				add_node(t_list *list, t_node *node);
t_hash_map			*create_hash_map(size_t init_size);
char				*get(int key, t_hash_map *hash_map);

#endif