NAME = libft.a

CC = cc
CFlags = -Wall -Wextra -Werror

SRCS = src/
OBJS = $(SRCS:.c=.o)

DEPS=../includes/header.h
FUNCS= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFlags) -o $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: clean