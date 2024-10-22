# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 19:41:59 by etina             #+#    #+#              #
#    Updated: 2024/10/22 17:11:06 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isprint.c ft_isdigit.c \
ft_isascii.c ft_isalpha.c ft_isalnum.c ft_toupper.c ft_tolower.c\
ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c \
ft_atoi.c ft_calloc.c ft_strdup.c

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