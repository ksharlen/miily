#ifndef CLINE_MAIN_H
# define CLINE_MAIN_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>

# define SIZE_BUFF 64

int     ft_open_file(char *file_name);
int     ft_read_write_file(int fd, char *buf);

#endif //CLINE_MAIN_H
