NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
AR	= ar rcs

SRCS	= ft_printf.c ft_print_chars.c ft_print_nbrs.c ft_print_hex.c
OBJS	= $(SRCS:.c=.o)

# --- Regra de Teste (fácil de remover) ---
TEST_NAME = test_printf

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME) $(TEST_NAME)

re:		fclean all

# --- Regra para compilar o main de teste ---
test:	all
	$(CC) $(CFLAGS) main.c -L. -lftprintf -o $(TEST_NAME)

.PHONY:	all clean fclean re test
