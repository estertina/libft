# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 19:41:59 by etina             #+#    #+#              #
#    Updated: 2024/10/12 13:35:18 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $@ $^

all : $(NAME)

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

re:
	fclean all 