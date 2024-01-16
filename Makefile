# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 18:30:42 by mgalmari          #+#    #+#              #
#    Updated: 2024/01/15 17:06:30 by mgalmari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar -rcs $(NAME)
RM = rm -f

SRC =	ft_strlen.c \
		ft_strdup.c \
		ft_putstr.c \
		ft_format.c \
		ft_putchar.c \
		ft_putnbr_b.c \
		ft_putnbr.c \
		ft_putmemory.c \
		ft_puthex.c \
		ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean

