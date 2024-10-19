# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldinc <aldinc@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 13:39:28 by aldinc            #+#    #+#              #
#    Updated: 2024/10/18 15:30:40 by aldinc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAG = -Wall -Wextra -Werror

SRC = 

OBJ = $(SRC:.c=.o)

LIBFT_PATH	= libft/

LIBFT = $(LIBFT_PATH)libft.a


all: $(LIBFT) $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus fclean re


$(LIBFT):
	@make -c $(LIBFT_PATH)
	@make clean -c $(LIBFT_PATH)

$(NAME): $(LIBFT) $(OBJ)
	gcc $(FLAG) -c $(SRC)
	ar -rcs $(NAME)
