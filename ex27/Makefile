NAME = ft_display_file

SRCS = src/
SRCS_F = ft_display_file.c

OBJS = $(addprefix $(SRCS), $(SRCS_F:.c=.o))

INC = includes/

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(SRCS)/%.o: $(SRCS)/%.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY.: all clean fclean re