/*
** EPITECH PROJECT, 2021
** putchar.c
** File description:
** my_putchar
*/

#include "./../../include/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
