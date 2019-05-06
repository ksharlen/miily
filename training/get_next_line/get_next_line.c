#include "libft.h"

static void    ft_print(int *rep_fd, int size)
{
    size_t i;

    i = 0;
    while (i < size)
        printf("fd[%lu] = %d\n", i, rep_fd[i++]);
}

// static void     ft_read_input_buff(int fd, t_list *beg, size_t lst_size)
// {
//     char buf[BUFF_SIZE + 1];

//     if ((read(fd, buf, BUFF_SIZE)) > 0)
//     {
//         ft_lstadd_end(&beg, ft_lstnew(buf, ft_strlen(buf) + 1));
//     }
//}
static void     ft_read_write(int fd, t_list **beg, ssize_t index)
{
    char    buff[BUFF_SIZE + 1];
    ssize_t byte_read;
    t_list  *tmp;

    //printf("index = %ld\n", index);
    byte_read = read(fd, buff, BUFF_SIZE);
    buff[byte_read] = '\0';
    if (index == -1)
    {
        ft_lstadd_end(beg, ft_lstnew(buff, byte_read + 1));
        printf("lst 1 = %s\n", (char *)(*beg)->content);
    }
    else
    {
        tmp = ft_lstelem(*beg, index, ft_lstsize(*beg));
        ft_lstreplace(&tmp, buff, ft_strlen(buff) + 1);
        //printf("lst = %s\n", (char *)tmp->content);
    }
}

int    get_next_line(const int fd, char **line)
{
    static int      rep_fd[7198];
//    static size_t   size_to;
    static t_list   *beg;
    t_list          *tmp;
    ssize_t         index;
    size_t          lst_size;

    printf("fd = %d\n", fd);
    if (fd >= 0 && fd < FD_MAX)
    {
        //printf("fd = %d\n", fd);
        lst_size = ft_lstsize(beg);
        index = ft_arrfind(rep_fd + 1, fd, rep_fd[0]);
        if (index == -1)
        {
            rep_fd[rep_fd[0] + 1] = fd;
            rep_fd[0] += 1;
        }
        printf("fd = %d\n", fd);
        ft_read_write(fd, &beg, index);
        /***BEGIN TEST PART***/
        // size_t i;

        // i = 0;
        // while (i <= rep_fd[0])
        // {
        //     printf("%lu) fd = %d\n", i, rep_fd[i]);
        //     ++i;
        // }
        /***END TEST PART***/

        // printf("size[0] = %d\n", rep_fd[0]);
        // tmp = beg;
        // printf("begin_list:\n");
        // while (tmp)
        // {
        //     printf("1)%s\n", (char *)beg->content);
        //     tmp = tmp->next;
        // }
        // printf("end_list.\n");


        // printf("lst = %s\n", (char *)beg->content);
        //ft_read_input_buff(rep_fd[index], beg, lst_size);
        //тут будем читать с файла и после добавлять это в список.
        //и далее анализировать что и как что бы вывести строку.
        //tmp = ft_lstelem(beg, index, lst_size);
        //дальше мы анализируем элемент и работаем с данными.
    }
    return (-1);
}