#include "libft.h"

static void     ft_test(t_list *elem)
{
    char *p1 = "joke";

    elem->content = ft_strdup(p1);
}

int     main(void)
{
    t_list *beg;
    char *p = "hello world";
    //char *p1 = "joke";
    t_list *tmp;

    beg = NULL;
    tmp = ft_lstnew(p, ft_strlen(p) + 1);
    ft_lstadd_end(&beg, tmp);
    printf("beg->content = %s\n", (char *)beg->content);
    ft_test(tmp);
    printf("beg->content = %s\n", (char *)beg->content);
    return (0);
}