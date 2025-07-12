NAME = libft.a

CC = cc
CFlags = -Wall -Wextra -Werror

SRCS = srcs/
OBJS = $(addprefix $(SRCS), $(SRCS_F:.c=.o))

SRCS_F = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

HEAD = includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCS)/%.o: $(SRCS)/%.c	
	$(CC) $(CFlags) -I HEAD -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY.: all clean fclean