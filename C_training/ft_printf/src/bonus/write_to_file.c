#include "ft_printf.h"

void        write_to_file(va_list format)
{
    int fd;

    fd = va_arg(format, int);
    if (fd > 0)
        g_spec.fd = fd;
}
