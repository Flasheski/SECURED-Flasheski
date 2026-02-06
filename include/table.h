/*
** EPITECH PROJECT, 2026
** G-CPE-110-LIL-1-1-secured-2
** File description:
** table
*/

#include "my.h"

#ifndef TABLE_H_
    #define TABLE_H_

typedef struct table_s {
    char *value;
    char *key;
    int hash;
    struct table_s *next;
} table_t;

#endif /* !TABLE_H_ */
