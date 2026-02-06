/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** my_put_unsigned
*/

#include "my.h"

int my_put_unsigned(unsigned int nb)
{
    if (nb >= 10)
        my_put_unsigned(nb / 10);
    my_putchar((nb % 10) + '0');
    return 0;
}
