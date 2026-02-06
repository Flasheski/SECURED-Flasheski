##
## EPITECH PROJECT, 2026
## makefile
## File description:
## makefile for libmy.a
##

SRC = \
	my_putchar.c \
	my_put_nbr.c \
	my_put_unsigned.c \
	my_putstr.c \
	my_puterror.c \
	my_strcmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_strlen.c

OBJ = $(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	= 	-Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include

%.o: 	%.c
	epiclang -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
