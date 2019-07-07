#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

#define ABS(x) ((x) = ((x) > 0 ? (x) : -(x)))

int
mxdiflg(const char **firstArray, size_t firstArrayLength,
		const char **secondArray, size_t secondArrayLength);

#endif