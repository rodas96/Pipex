NAME = pipex
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = main.c

OBJS = $(SRC:.c=.o)

FT_LIBFT_PATH = ./libft
FT_LIBFT_NAME = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -s -C $(FT_LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) $(FT_LIBFT_NAME) -o $(NAME)

clean:
	$(RM) $(OBJS)
	make -s -C $(FT_LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	make -s -C $(FT_LIBFT_PATH) fclean

re: fclean all
