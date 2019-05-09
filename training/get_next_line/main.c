#include "get_next_line.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

int     main(void)
{
//    char 	*line = NULL;
    int ret;
    char *line;

    	// ret =  get_next_line(-99, NULL);
        // printf("ret = %d\n", ret);
    	// ret =  get_next_line(-1, NULL);
        // printf("ret = %d\n", ret);
    	// ret =  get_next_line(-10000, NULL);
        // printf("ret = %d\n", ret);
    printf("hello world\n");
	ret =  get_next_line(1, &line);
    printf("line = %s\n", line);
    printf("ret = %d\n", ret);
	// ret =  get_next_line(99, NULL);
    // printf("ret = %d\n", ret);
	    // ret =  get_next_line(-99, &line);
        // printf("ret = %d\n", ret);
	    // ret =  get_next_line(-1, &line);
        // printf("ret = %d\n", ret);
	    // ret =  get_next_line(-10000, &line);
        // printf("ret = %d\n", ret);
	    // ret =  get_next_line(42, &line);
        // printf("line = %s\n", line);
        // printf("ret = %d\n", ret);
}
// int     main(void)
// {
//     char    *line;
//     char    test[100];
//     size_t  i;
//     int ret;

// //    fd = open("serc", O_RDONLY);
//     scanf("%s", test);
//     i = 1;
//     while ((ret = get_next_line(0, &line)))
//     {
// //        ret = get_next_line(fd, &line);
//         printf("%lu)    line = %s   ret = %d\n", i, line, ret);
//         free(line);
//         i++;
//     }
//     // fd1 = open("serc", O_RDONLY);
//     // ret = get_next_line(fd, &line);
//     // printf("line fd = %s\nret = %d\n", line, ret);
//     // ret1 = get_next_line(fd1, &line);
//     // printf("line fd1 = %s\nret1 = %d\n", line, ret1);
//     return (0);
// }