/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** new_hashtable
*/

#include "my.h"
#include "hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht;

    if (len <= 0 || !hash)
        return NULL;
    ht = malloc(sizeof(hashtable_t));
    if (!ht)
        return NULL;
    ht->table = malloc(sizeof(table_t *) * len);
    if (!ht->table) {
        free(ht);
        return NULL;
    }
    for (int i = 0; i < len; i++)
        ht->table[i] = NULL;
    ht->size = len;
    ht->hash = hash;
    return ht;
}
