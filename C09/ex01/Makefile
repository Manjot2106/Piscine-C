SRC = srcs/ft_putchar.c \
      srcs/ft_swap.c \
      srcs/ft_putstr.c \
      srcs/ft_strlen.c \
      srcs/ft_strcmp.c

OBJ = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
LIB = libft.a
HEADER = includes/ft.h

all: ${LIB}

$(LIB): ${OBJ}
	ar rcs ${LIB} ${OBJ}
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -Iincludes -c $< -o $@

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${LIB}
re: fclean all
.PHONY: all clean fclean re
