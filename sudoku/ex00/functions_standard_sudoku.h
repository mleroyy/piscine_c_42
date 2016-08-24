/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_standard_sudoku.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:19:46 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:19:47 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_STANDARD_SUDOKU_H
# define FUNCTIONS_STANDARD_SUDOKU_H
# include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	init_board(int tab[9][9], char **argv);
void	print_board(int tab[9][9]);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	print(void);
int		check_square(int tab[9][9], int line, int column, int value);
int		check_column(int tab[9][9], int column, int value);
int		check_line(int	tab[9][9], int	column, int value);
int		board_is_valid(int tab[9][9], int position);
int		insert_data(int tab[9][9], int position, int line, int column);
#endif
