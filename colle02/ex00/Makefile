# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarette <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 17:38:05 by rcarette          #+#    #+#              #
#    Updated: 2016/08/21 17:25:07 by rcarette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC=gcc
CFLAGS = -Wall -Werror -Wextra
SRCS= get_grid.c\
	  find_grid.c\
	  ft_putchar.c\

SRCSO= ft_putchar.o\
	   get_grid.o\
	   find_grid.o\


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) && $(CC) $(SRCSO) -o $(NAME)


clean:
	rm -f $(SRCSO)

fclean: clean
	rm -f $(NAME)

re: fclean all

