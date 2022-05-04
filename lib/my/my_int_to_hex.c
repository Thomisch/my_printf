/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-thomas.decaudain
** File description:
** my_long_to_hexadecimal
*/

#include "./my.h"

char *long_to_hex(long int nb)
{
    int long i = 0;
    int long k = 0;
    int long temp;
    for(; nb > my_compute_power_rec(16, i) &&
        nb < my_compute_power_rec(16, i + 1); k++);
    char *result = malloc(sizeof(char) * k + 1);

    for(; nb != 0; i++) {
        temp = nb % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 87;
        result[i] = temp;
        nb = nb / 16;
    }
    my_revstr(result);
    result[i] = '\0';
    return(result);
}