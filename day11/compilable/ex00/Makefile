# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleroy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 22:23:59 by mleroy            #+#    #+#              #
#    Updated: 2016/08/22 23:02:31 by mleroy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.c\
	  ft_create_elem.c\
	  ft_print_elem.c

HEADER = ./

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -I $(HEADER) -o $(NAME) $(SRC)

clean:
	rm $(NAME)

re: clean all
