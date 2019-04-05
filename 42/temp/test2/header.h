#ifndef HEADER_H
# define HEADER_H

# define ON		1
# define OFF 	0

# define DEBUG ON

# if DEBUG == ON
	# define info(msg) printf("%s\n", msg)
# else
	# define info(msg)
# endif

# include <string.h>
# include <stdio.h>

#endif
