# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 19:41:59 by etina             #+#    #+#              #
#    Updated: 2024/10/19 19:44:51 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isprint.c ft_isdigit.c \
ft_isascii.c ft_isalpha.c ft_isalnum.c ft_toupper.c ft_tolower.c\
ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_memchr.c

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