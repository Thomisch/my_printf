/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-thomas.decaudain
** File description:
** my_flags for my_printf
*/

#include "./my.h"

void pour_i(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void pour_s(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void pour_c(va_list list)
{
    my_putchar(va_arg(list, int));
}

void pour_pour(va_list list)
{
    my_putchar('%');
}

void pour_u(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void pour_o(va_list list)
{
    my_putstr(int_to_oct(va_arg(list, long)));
}

void pour_h(va_list list)
{
    my_putstr(long_to_hex(va_arg(list, long)));
}

void pour_p(va_list list)
{
    my_putstr("0x");
    my_putstr(long_to_hex(va_arg(list, long)));
}
