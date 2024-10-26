# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldinc <aldinc@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 13:39:28 by aldinc            #+#    #+#              #
#    Updated: 2024/10/23 19:04:25 by aldinc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAG = -Wall -Wextra -Werror

SRC = ft_check_type.c ft_print_hex.c ft_printf.c \
		ft_printptr.c ft_print_unsigned.c ft_putchar.c \
		ft_putnbr.c ft_putstr.c 

OBJ = ft_check_type.o ft_print_hex.o ft_printf.o \
		ft_printptr.o ft_print_unsigned.o ft_putchar.o \
		ft_putnbr.o ft_putstr.o 

all: $(NAME)

$(NAME): $(OBJ)
	cc $(FLAG) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus fclean re