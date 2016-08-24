/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:48:23 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/07 15:12:45 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		count_spaces(int size_sastantua)
{
	int		result;
	int		i;
	int		space;

	result = 0;
	i = 0;
	space = 3;
	while (i < size_sastantua)
	{
		result += space++;
		i++;
	}
	i = 1;
	space = 1;
	while (i < size_sastantua)
	{
		if ((i % 2) == 1)
			space++;
		result += space;
		i++;
	}
	return (result - 1);
}

void	print_door(int **board_p, int i_door, int *i_column, int *i_line)
{
	int		door;
	int		z;

	z = 3;
	if ((*board_p[0]) % 2 == 0)
	{
		door = ((*board_p[0]) - 1);
		z = 4;
	}
	else
		door = ((*board_p[0]));
	if ((*board_p[1] == (*board_p[0]) + 1) && *i_column >= z)
		if (*i_line == ((*board_p[3]) / 2 - (door / 2)))
			while (i_door < door)
			{
				if (*i_column == (z + (door / 2)) && i_door == door - 2)
					if ((*board_p[0]) > 4 && (++i_door))
					{
						ft_putchar('$');
						(*i_line)++;
					}
				ft_putchar('|');
				i_door++;
				(*i_line)++;
			}
}

void	print_spaces(int i_space, int *space)
{
	i_space = 0;
	while (i_space++ < *space)
		ft_putchar(' ');
	(*space)--;
}

void	print_sastantua(int **board_p, int lvl_line, int spaces, int i_line)
{
	int		i_column;

	spaces = count_spaces((*board_p[0]));
	while (!(i_column = 0) && (*board_p[1])++ <= *board_p[0])
	{
		while (!(i_line = 0) && i_column++ < *board_p[2])
		{
			print_spaces(0, &spaces);
			ft_putchar('/');
			while (i_line++ < (*board_p[3]))
			{
				ft_putchar('*');
				print_door(board_p, 0, &i_column, &i_line);
			}
			(*board_p[3]) += 2;
			ft_putchar('\\');
			ft_putchar('\n');
		}
		(*board_p[3]) += lvl_line;
		(*board_p[2])++;
		spaces -= (lvl_line / 2);
		if ((*board_p[1]) % 2 == 1 && (*board_p[1]) > 1)
			lvl_line += 2;
	}
}

void	sastantua(int size)
{
	int		*board_p[5];
	int		column;
	int		lines;
	int		lvl_spaces;
	int		i_sastantua;

	lvl_spaces = 4;
	lines = 1;
	column = 3;
	i_sastantua = 1;
	board_p[0] = &size;
	board_p[1] = &i_sastantua;
	board_p[2] = &column;
	board_p[3] = &lines;
	board_p[4] = &lvl_spaces;
	print_sastantua(board_p, 4, 0, 0);
}
