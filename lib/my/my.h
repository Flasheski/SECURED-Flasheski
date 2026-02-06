/*
** EPITECH PROJECT, 2025
** my_h
** File description:
** my_h
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#ifndef MY_H_
    #define MY_H_

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_unsigned(unsigned int nb);
void my_puterror(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);

#endif /* !MY_H_ */
