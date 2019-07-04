#include "hash_map.h"

int abs(int x)
{
	return x < 0 ? -x : x;
}
static int			hash(int key, size_t size_map)
{
	key = key * key / 2;
	return (ABS(key) % size_map);
}

static t_list		**create_map(size_t init_size)
{
	t_list 	**ret;
	size_t index;

	index = 0;
	if (!(ret = (t_list **)malloc(sizeof(t_list *) * init_size)))
		return (NULL);
	while (index < init_size)
		ret[index++] = create_list();
	return (ret);
}

t_hash_map	*create_hash_map(size_t init_size)
{
	t_hash_map *ret;

	if (!(ret = (t_hash_map *)malloc(sizeof(t_hash_map))))
		return (NULL);
	ret->map = create_map(init_size);
	ret->size_map = init_size;
	return (ret);
}


void		put(int key, char *value, t_hash_map *hash_map)
{
	int 	index;
	t_node 	*node;

	index = hash(key, hash_map->size_map);
	node = create_node(key, value);
	add_node(hash_map->map[index], node);
}

char		*get(int key, t_hash_map *hash_map)
{
	int		index;
	t_node	*run;

	index = hash(key, hash_map->size_map);
	run = hash_map->map[index]->head;
	while (run)
	{
		if (run->key == key)
			return (run->value);
		run = run->next;
	}
	return (NULL);
}