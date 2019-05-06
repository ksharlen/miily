#include "libft.h"

// static void     ft_read_input_buff(int fd, t_list *beg, size_t lst_size)
// {
//     char buf[BUFF_SIZE + 1];

//     if ((read(fd, buf, BUFF_SIZE)) > 0)
//     {
//         ft_lstadd_end(&beg, ft_lstnew(buf, ft_strlen(buf) + 1));
//     }
//}

static  int     ft_error(int err, short *flag_error, t_list **begin_list)
{
    //ft_lstdel(begin_list, тут будет ф-ия по очищению списка);
    if (err == -1)
        &flag_error = -1;
}
static void     ft_read_write(int fd, t_list **beg, ssize_t index)
{
    char    buf[BUFF_SIZE + 1];
    ssize_t byte_read;
    t_list  *tmp;

    //printf("index = %ld\n", index);
    byte_read = read(fd, buf, BUFF_SIZE);
    buf[byte_read] = '\0';
    // printf("buf = %s\n", buf);
    // printf("index = %ld\n", index);
    if (index == -1)
        ft_lstadd_end(beg, ft_lstnew(buf, byte_read + 1));
    else
    {
        tmp = ft_lstelem(*beg, index, ft_lstsize(*beg));
        ft_lstreplace(&tmp, buf, ft_strlen(buf) + 1);
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
    short flag_error;

    //printf("fd = %d\n", fd);
    flag_error = 0;
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
        //printf("fd = %d\n", fd);
        ft_read_write(fd, &beg, index);
        if (flag_error == -1)
            return (-1);
        /***BEGIN TEST PART***/
        // size_t i;

        // i = 0;
        // while (i <= rep_fd[0])
        // {
        //     printf("%lu) fd = %d\n", i, rep_fd[i]);
        //     ++i;
        // }
        /***END TEST PART***/

//        printf("size[0] = %d\n", rep_fd[0]);
//         tmp = beg;
//  //       printf("begin_list:\n");
//         while (tmp)
//         {
//             printf("1)%s\n", (char *)tmp->content);
//             tmp = tmp->next;
//         }
//         printf("end_list.\n");
//    ft_lstdelone(&beg, ft_lstfreeone);

        // printf("lst = %s\n", (char *)beg->content);
        //ft_read_input_buff(rep_fd[index], beg, lst_size);
        //тут будем читать с файла и после добавлять это в список.
        //и далее анализировать что и как что бы вывести строку.
        //tmp = ft_lstelem(beg, index, lst_size);
        //дальше мы анализируем элемент и работаем с данными.
    }
    return (-1);
}