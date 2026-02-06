/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** ht_search
*/

#include "my.h"
#include "hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    table_t *temp;
    int idx = 0;
    int hash_value = 0;

    if (ht == NULL || key == NULL)
        return NULL;
    hash_value = ht->hash(key, ht->size);
    idx = (hash_value < 0 ? -hash_value : hash_value) % ht->size;
    temp = ht->table[idx];
    while (temp != NULL) {
        if (my_strcmp(temp->key, key) == 0)
            return temp->value;
        temp = temp->next;
    }
    return NULL;
}
