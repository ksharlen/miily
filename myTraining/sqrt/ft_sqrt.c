#include <stdio.h>

int	main(void)
{
	int i;
	int sqrt;
	int sum;
	int s;

	printf("write your number: \n");
	scanf("%d", &sqrt);
	i = 1;
	sum = 0;
	while (i <= sqrt)
	{
		sum = sqrt / i;
		if ((sum == i) && (sum != sqrt) && (sum != 0))
		{
			printf("sqrt(%d) = %d\n", sqrt, sum);
			break;
		}
		i++;
	}
	return (0);
}
