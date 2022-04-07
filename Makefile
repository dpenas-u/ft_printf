# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 10:49:59 by dpenas-u          #+#    #+#              #
#    Updated: 2022/04/07 16:01:27 by dpenas-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putunbr.c ft_putnbr_base.c \
	  ft_strlen.c ft_putstr.c ft_putxnbr.c

OBJ_SRC = $(SRC:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

$(NAME): $(OBJ_SRC)
	ar rcs $(NAME) $(OBJ_SRC)

all: $(NAME)

clean:
	rm -f $(OBJ_SRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
