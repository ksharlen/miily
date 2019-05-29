#include <stdio.h>

union test
{
	long long			ll;
	unsigned long long	llu;
	long				l;
	unsigned long		ul;
	int					d;
	unsigned int		ud;
	short 				h;
	unsigned short		hh;
	char				c;
	unsigned char 		uc;
};

char	*ft_test(union test type, char *format)
{
	if (strcmp(format, "d"))
	{
		
	}	
};
)

int		main(void)
{
	union test	dem;
	
	dem.l = 45;
	printf("%d\n", dem.s);
	return (0);
}