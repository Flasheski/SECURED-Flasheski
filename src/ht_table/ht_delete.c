/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** ht_delete
*/

#include "my.h"
#include "hashtable.h"

static void get_node_unlinked(hashtable_t *ht, table_t *actual,
    table_t *previous_one, int idx)
{
    if (previous_one != NULL)
        previous_one->next = actual->next;
    else
        ht->table[idx] = actual->next;
    free(actual->key);
    free(actual->value);
    free(actual);
}

int ht_delete(hashtable_t *ht, char *key)
{
    int idx = 0;
    int hash_value = 0;
    table_t *actual;
    table_t *previous_one = NULL;

    if (ht == NULL || key == NULL)
        return 84;
    hash_value = ht->hash(key, ht->size);
    idx = (hash_value < 0 ? -hash_value : hash_value) % ht->size;
    actual = ht->table[idx];
    while (actual != NULL) {
        if (my_strcmp(actual->key, key) == 0) {
            get_node_unlinked(ht, actual, previous_one, idx);
            return 0;
        }
        previous_one = actual;
        actual = actual->next;
    }
    return 84;
}
