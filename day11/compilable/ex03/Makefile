# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleroy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 22:23:59 by mleroy            #+#    #+#              #
#    Updated: 2016/08/23 00:19:04 by mleroy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.c\
	  ft_list_push_front.c\
	  ft_create_elem.c\
	  ft_print_elem.c\
	  ft_list_size.c

HEADER = ./

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -I $(HEADER) -o $(NAME) $(SRC)

clean:
	rm -rf $(NAME)

re: clean all
