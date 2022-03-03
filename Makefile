# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 13:27:41 by grubin            #+#    #+#              #
#    Updated: 2022/02/18 16:33:33 by grubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRC = push_swap.c check_error.c sort.c swap.c push.c rotate.c reverses.c sorted_index.c sort_three.c sort_five.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME):$(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
