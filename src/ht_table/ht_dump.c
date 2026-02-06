/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** ht_dump
*/

#include "my.h"
#include "hashtable.h"

static void print_dump(table_t *tmp)
{
    my_putstr("> ");
    my_put_unsigned((unsigned int)tmp->hash);
    my_putstr(" - ");
    my_putstr(tmp->value);
    my_putchar('\n');
}

void ht_dump(hashtable_t *ht)
{
    int i = 0;
    table_t *tmp;

    if (!ht)
        return;
    while (i < ht->size) {
        my_putstr("[");
        my_put_nbr(i);
        my_putstr("]:\n");
        tmp = ht->table[i];
        while (tmp) {
            print_dump(tmp);
            tmp = tmp->next;
        }
        i++;
    }
}
