/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** main
*/

#include "my.h"
#include "hashtable.h"

int main(void)
{
    hashtable_t *ht;

    ht = new_hashtable(&hash, 4);
    ht_insert(ht, "<3", "Premier élément");
    ht_insert(ht, "</3", "Deuxième élément");
    ht_insert(ht, "Vision", "Autre index");
    my_putstr("--- Table avant suppression ---\n");
    ht_dump(ht);
    my_putstr("\n--- Suppression du premier élément de la liste('<3') ---\n");
    ht_delete(ht, "</3");
    ht_dump(ht);
    my_putstr("\n--- Test de rechercher du survivant ('<3') ---\n");
    my_putstr("Résultat: ");
    my_putstr(ht_search(ht, "<3"));
    my_putchar('\n');
    return 0;
}
