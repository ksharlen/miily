#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

int     main(void)
{
    void *test;
    char *p = "hello world";

    test = malloc((sizeof(char) * strlen(p) + 1) + sizeof(int));
    (*(int *)test) = 24;
    memcpy(test + 4, p, strlen(p) + 1);
    printf("testInt = %d\ntestStr = %s\n", (*(int *)test), (char *)test + 4);
    return (0);
}