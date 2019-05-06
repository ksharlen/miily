#include "libft.h"

// static void     ft_read_input_buff(int fd, t_list *beg, size_t lst_size)
// {
//     char buf[BUFF_SIZE + 1];

//     if ((read(fd, buf, BUFF_SIZE)) > 0)
//     {
//         ft_lstadd_end(&beg, ft_lstnew(buf, ft_strlen(buf) + 1));
//     }
//}

static t_list   *ft_find_fd_to_lst(t_list *beg, int fd)
{
    if (beg)
        while (beg)
        {
            if ((*(int *)beg->content) == fd)
                return (beg);
            beg = beg->next;
        }
    return (NULL);
}

static int      ft_error(int err, short *flag_error, t_list **begin_list)
{
    //ft_lstdel(begin_list, тут будет ф-ия по очищению списка);
    if (err == -1)
        *flag_error = -1;
}
static ssize_t     ft_read_write(const int fd, char *buf, short *flag_error)
{
    ssize_t byte_read;

    byte_read = read(fd, buf, BUFF_SIZE);
    if (byte_read == -1)
        *flag_error = byte_read;
    buf[byte_read] = '\0';
    // printf("buf = %s\n", buf);
    // // printf("index = %ld\n", index);
    // if (index == -1)
    //     ft_lstadd_end(beg, ft_lstnew(buf, byte_read + 1));
    // else
    // {
    //     tmp = ft_lstelem(*beg, index, ft_lstsize(*beg));
    //     ft_lstreplace(&tmp, buf, ft_strlen(buf) + 1);
    // }
    return (byte_read);
}

int             get_next_line(const int fd, char **line)
{
//    static int      rep_fd[7198];
//    static size_t   size_to;
    static t_list   *beg;
    t_list          *tmp;
    void            *buf;
    short           flag_error;
    ssize_t         byte_read;
    //char buf[BUFF_SIZE + 1 + 4];

    //printf("fd = %d\n", fd);
    flag_error = 0;
    buf = ft_memalloc(BUFF_SIZE + 1 + 4);
    if (!buf)
        flag_error = -1;
    if (fd >= 0 && fd < FD_MAX)
    {
        if (!(tmp = ft_find_fd_to_lst(beg, fd)))
        {
            (*(int *)buf) = fd;
            byte_read = ft_read_write(fd, (char *)buf + 4, &flag_error);
            if (flag_error == -1)
                return (-1);
            ft_lstadd_end(&beg, ft_lstnew(buf, ft_strlen((char *)buf + 4) + 1 + 4));
        }
        else
        {
            ft_line_form(tmp);
        }
        
        //printf("")
        // tmp = beg;
        // while (tmp)
        // {
        //     printf("contentInt = %d content_size = %ld\n", *(int *)tmp->content, tmp->content_size);
        //     printf("contentStr = %s\n", (char *)tmp->content + 4);
        //     tmp = tmp->next;
        // }
        // printf("buf = %d\n", ((int *)buf)[0]);
        // //printf("flag_error = %d\n", flag_error);
        // printf("str = %s\n", (char *)buf + 4);
        // else
        // {
        //     ft_line_form();
        // }

        //printf("fd = %d\n", fd);

        /***BEGIN OLD CODE***/
        // lst_size = ft_lstsize(beg);
        // index = ft_arrfind(rep_fd + 1, fd, rep_fd[0]);
        // if (index == -1)
        // {
        //     rep_fd[rep_fd[0] + 1] = fd;
        //     rep_fd[0] += 1;
        // }
        // //printf("fd = %d\n", fd);
        // ft_read_write(fd, &beg, index);
        // if (flag_error == -1)
        //     return (-1);
        /***END OLD CODE***/
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