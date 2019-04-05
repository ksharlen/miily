#include <stdio.h>
#include <math.h>

int		main(void)
{
	unsigned int a;

	a = 4000000000;
	printf("int = %ld \n", sizeof(int));
	printf("float = %ld \n", sizeof(float));
	printf("double = %ld \n", sizeof(double));
	printf("char = %ld \n", sizeof(char));
	printf("short = %ld \n", sizeof(short));
	printf("long int = %ld \n", sizeof(long int));
	printf("unsigned int = %ld\n", sizeof(unsigned int));

	printf("unsigned int %u\n", a);
	printf("%f.0", pow(2, 32) / 2);
	return (0);
}
