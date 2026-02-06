/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** ht_insert
*/

#include "my.h"
#include "hashtable.h"

static int check_update(table_t *node, char *key, char *value)
{
    while (node) {
        if (my_strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = my_strdup(value);
            return 1;
        }
        node = node->next;
    }
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    table_t *new_node;
    int index = 0;
    int hash_value = 0;

    if (!ht || !key || !value)
        return 84;
    hash_value = ht->hash(key, ht->size);
    index = (hash_value < 0 ? -hash_value : hash_value) % ht->size;
    if (check_update(ht->table[index], key, value))
        return 0;
    new_node = malloc(sizeof(table_t));
    if (!new_node)
        return 84;
    new_node->hash = hash_value;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->next = ht->table[index];
    ht->table[index] = new_node;
    return 0;
}
