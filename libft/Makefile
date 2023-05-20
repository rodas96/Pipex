# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:33:41 by rmorais           #+#    #+#              #
#    Updated: 2022/11/19 17:08:49 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLE

NAME = libft.a

SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_substr ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup\
ft_strjoin ft_strtrim ft_strmapi ft_striteri ft_itoa ft_split\

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap\

CC	= gcc
RM	= rm -f
CFLAGS 	= -Wall -Wextra -Werror
AR	= ar rcs

all: $(NAME) bonus

$(NAME): $(SRC:=.o)
	@$(AR) $(NAME) $(SRC:=.o)
bonus:	$(BONUS:=.o)
	@$(AR) $(NAME) $(BONUS:=.o)
clean: 
	@$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
	@$(RM) $(NAME)
re: fclean all

.PHONY:	all bonus  clean fclean re
