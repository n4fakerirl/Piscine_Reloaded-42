# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 15:28:19 by ocviller          #+#    #+#              #
#    Updated: 2025/04/26 17:02:07 by ocviller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = ./srcs/
INC_DIR = ./includes/libft.h
CC = cc 
CFLAGS = -Wall -Wextra -Werror
OPTION = -c -I $(INC_DIR)
SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strcmp.c \
	$(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: fclean clean all re