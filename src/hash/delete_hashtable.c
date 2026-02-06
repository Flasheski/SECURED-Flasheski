/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** delete_hashtable
*/

#include "my.h"
#include "hashtable.h"

void delete_hashtable(hashtable_t *ht)
{
    int i = 0;
    table_t *actual;
    table_t *next_one;

    if (ht == NULL)
        return;
    while (i < ht->size) {
        actual = ht->table[i];
        while (actual != NULL) {
            next_one = actual->next;
            free(actual->key);
            free(actual->value);
            free(actual);
            actual = next_one;
        }
        i++;
    }
    free(ht->table);
    free(ht);
}
