# Compiler & Flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g

# Library
LIBFT       = @make -C ./libft
LIB         = libft/libft.a

# Project Name
NAME        = pipex

# Sources & Objects
SRCS        =	srcs/main.c \
				srcs/pipex_utile.c\

OBJ_FOLDER  = objs
OBJS        = $(patsubst srcs/%.c, $(OBJ_FOLDER)/%.o, $(SRCS))

# Includes
INCLUDES    = includes

# Rules
all: $(NAME)

$(NAME): $(OBJS) libft
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

$(OBJ_FOLDER)/%.o: srcs/%.c
	@mkdir -p $(OBJ_FOLDER)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

libft:
	$(LIBFT)

clean:
	@rm -f $(OBJS)
	@cd libft && make clean
	@rm -rf $(OBJ_FOLDER)

fclean:
	@rm -f $(NAME) $(OBJS)
	@cd libft && make fclean
	@rm -rf $(OBJ_FOLDER)

re: fclean all

.PHONY: all clean fclean re libft
