/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** hash_function
*/

#include "my.h"
#include "hashtable.h"

int hash(char *key, int len)
{
    unsigned long res = len;
    int i = 0;

    if (key == NULL || len <= 0)
        return 0;
    while (key[i] != '\0') {
        res = res + (unsigned char)key[i];
        res = res * res;
        i++;
    }
    res = (int)((res >> 3) & 0x7777777);
    if (res < 0)
        res *= -1;
    return res;
}
