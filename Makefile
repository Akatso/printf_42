NAME = libftprintf

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_puthexa.c \
	  ft_strlen.c \
	  ft_printf.c

LIB = -L.

OBJ = $(SRC:.c=.o)

CFLAGS += -g -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar -rcs libftprintf.a *.o

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libftprintf.a

re: fclean all

.PHONY: all clean fclean re
