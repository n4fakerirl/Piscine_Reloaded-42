# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 20:18:37 by ocviller          #+#    #+#              #
#    Updated: 2025/04/26 21:16:15 by ocviller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = ft_display_file.o

all : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY: fclean clean all