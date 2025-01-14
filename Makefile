CC = cc

SRC =	srcs/main.c \

OBJ =	$(SRC:.c=.o)


CFLAGS += -Wall -Wextra -Werror

LIBFT = Libft/libft.a

NAME =	pipex.a

all:	$(NAME) $(OBJ)

$(NAME): $(OBJ)
	cc $(NAME) $(OBJ) $(LIBFT)

clean:
	rm -f $(OBJ

fclean:	clean
	rm -f $(NAME) $(OBJ)

re:	fclean all

.PHONY: all clean fclean libft re bonus
