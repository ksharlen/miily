#include "hash_map.h"

int main(void)
{
	t_hash_map *one;

	one = create_hash_map(16);
	put(3, "king", one);
	put(4, "test", one);
	put(13, "hello", one);
	put(13, "how", one);
	put(4, "fish", one);
	printf("get(4) = %s\n", get(4, one));
	return(0);
}