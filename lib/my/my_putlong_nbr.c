/*
** EPITECH PROJECT, 2021
** CPoolDay03 Task07 (remastered function)
** File description:
** my_putlong_nbr for ./printf
*/

#include "./my.h"

int get_lenght(int num)
{
    int i;

    if (num == 0)
        return (1);
    for (i = 1; num != 0; i++)
        num = num / 10;
    return (i - 1);
}

int power_ten(int amout)
{
    int tenden = 1;

    for (int h = 0; h < amout; ++h)
        tenden = tenden * 10;
    return (tenden);
}

int my_putlong_nbr(long int nb)
{
    int buff;
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    for (int k = 1; k <= get_lenght(nb); k++) {
        buff = (nb / power_ten(get_lenght(nb) - k)) % 10;
        my_putchar(buff + '0');
    }
    return (0);
}
