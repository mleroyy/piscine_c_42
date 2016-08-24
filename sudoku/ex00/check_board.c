/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:17:38 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:17:39 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_standard_sudoku.h"

int		check_line(int tab[9][9], int line, int value)
{
	int		iterator;

	iterator = 0;
	while (iterator < 9)
	{
		if (tab[line][iterator] == value)
			return (0);
		iterator++;
	}
	return (1);
}

int		check_column(int tab[9][9], int column, int value)
{
	int		iterator;

	iterator = 0;
	while (iterator < 9)
	{
		if (tab[iterator][column] == value)
			return (0);
		iterator++;
	}
	return (1);
}

int		check_square(int tab[9][9], int line, int column, int value)
{
	int		iterator;
	int		jterator;
	int		i_line;
	int		i_column;

	iterator = 0;
	jterator = 0;
	i_line = 3 * (line / 3);
	i_column = 3 * (column / 3);
	iterator = i_line;
	while (iterator < i_line + 3)
	{
		jterator = i_column;
		while (jterator < i_column + 3)
		{
			if (tab[iterator][jterator] == value)
				return (0);
			jterator++;
		}
		jterator = 0;
		iterator++;
	}
	return (1);
}

int		board_is_valid(int tab[9][9], int position)
{
	int		i_line;
	int		i_column;

	i_line = (position / 9);
	i_column = (position % 9);
	if (position == 81)
		return (1);
	if (tab[i_line][i_column] != 0)
		return (board_is_valid(tab, position + 1));
	return (insert_data(tab, position, i_line, i_column));
}

int		insert_data(int tab[9][9], int position, int line, int column)
{
	int		value;

	value = 1;
	while (value <= 9)
	{
		if (check_line(tab, line, value) == 1)
			if (check_column(tab, column, value) == 1)
				if (check_square(tab, line, column, value) == 1)
				{
					tab[line][column] = value;
					if (board_is_valid(tab, position + 1))
						return (1);
				}
		value++;
	}
	tab[line][column] = 0;
	return (0);
}
