##
## EPITECH PROJECT, 2026
## G-CPE-110-LIL-1-1-secured-2
## File description:
## Makefile
##

CC      =   epiclang

LIB_SRC =   src/hash/hash_function.c \
            src/hash/new_hashtable.c \
			src/hash/delete_hashtable.c \
			src/ht_table/ht_delete.c \
            src/ht_table/ht_dump.c    \
            src/ht_table/ht_insert.c  \
            src/ht_table/ht_search.c  \

LIB_OBJ =   $(LIB_SRC:.c=.o)

NAME    =   libhashtable.a
LIBMY_PATH	=	lib/my/libmy.a

CPPFLAGS =  -I./include
CFLAGS  =   -Wall -Wextra

all: $(NAME)

$(NAME): $(LIB_OBJ)
	$(MAKE) -C ./lib/my
	@mkdir -p merge_libs
	@cd merge_libs && ar x ../$(LIBMY_PATH)
	@ar rc $(NAME) $(LIB_OBJ) merge_libs/*.o
	@rm -rf merge_libs
	@echo "Libhashtable.a created and merged with libmy.a"

test: all
	$(MAKE) -C ./lib/my
	$(CC) src/main.c -o secured -L. -lhashtable -L./lib/my -lmy $(CPPFLAGS) $(CFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	rm -f $(LIB_OBJ)
	rm -f src/main.o

fclean: clean
	$(MAKE) -C ./lib/my fclean
	rm -f $(NAME)
	rm -f secured

re: fclean all

.PHONY: all test clean fclean re
