#include "main.h"

static int
defVal(const char *one, const char *two)
{
	return ((one && two) ? 1 : 0);
}

static int
defMax(int max, int des)
{
	return (max >= des ? max : des);
}

static int
maxLen(	size_t lenFirstStr, const char **secondArray,
		size_t secondArrayLength, size_t *lenMax)
{
	int 		num;

	while (secondArrayLength--)
	{
		num = lenFirstStr - strlen(*secondArray);
		ABS(num);
		*lenMax = defMax(*lenMax, num);
		*secondArray++;
	}
	return (0);
}

int
mxdiflg(const char **firstArray, size_t firstArrayLength,
		const char **secondArray, size_t secondArrayLength)
{
	size_t		lenFirstStr;
	size_t 		lenMax;

	if (firstArray && secondArray)
	{
		if (defVal(*firstArray, *secondArray))
		{
			lenMax = 0;
			while (firstArrayLength--)
			{
				lenFirstStr = strlen(*firstArray);
				maxLen(lenFirstStr, secondArray, secondArrayLength, &lenMax);
				firstArray++;
			}
			return (lenMax);
		}
	}
	return (-1);
}