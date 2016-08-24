# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleroy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/19 14:50:29 by mleroy            #+#    #+#              #
#    Updated: 2016/08/22 12:20:07 by mleroy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = do_op2.c operators.c functions.c ft_atoi.c

FLAGS = -Wall -Werror -Wextra

HEADER = ./

all:
	gcc -I $(HEADER) $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: clean all
