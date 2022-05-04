/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-thomas.decaudain
** File description:
** printf
*/

#include "./my.h"

void (*my_flags_array_printer[10])(va_list list) = {
    pour_i,
    pour_i,
    pour_s,
    pour_c,
    pour_pour,
    pour_u,
    pour_o,
    pour_h,
    pour_h,
    pour_p,
};

void my_print_flagl(va_list list, char *str, int count1, int count2)
{
    if (str[count1] == 'l') {
        if (str[count2] == 'd') {
            my_put_nbr(va_arg(list, long));
        }
        else if (str[count2] == 'i') {
            my_put_nbr(va_arg(list, long));
        }
    }
    else if (str[count1] == 'h') {
        if (str[count2] == 'd') {
            my_put_nbr(va_arg(list, int));
        }
        else if (str[count2] == 'i') {
            my_put_nbr(va_arg(list, int));
        }
    }
}

void my_print_flag(va_list list, char *str, int count)
{
    int i = 0;
    char basic_flags[10] = "idsc%uoxXp";

    for (; basic_flags[i] != str[count]; i++);
    my_flags_array_printer[i](list);
}

int my_printf(char *str, ...)
{
    va_list list;
    int i = 0;
    int j = 0;

    va_start(list, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%' && str[i + 1] == 'l' || str[i + 1] == 'h') {
            j = i + 1;
            i = i + 2;
            my_print_flagl(list, str, j, i);
            i++;
        }
        if (str[i] == '%') {
            i++;
            my_print_flag(list, str, i);
        }
        else {
            my_putchar(str[i]);
        }
    }
    va_end(list);
    return (0);
}
