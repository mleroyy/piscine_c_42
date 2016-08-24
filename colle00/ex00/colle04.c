/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:08:24 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/06 13:55:03 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int		character;

	character = x;
	while (character > 1)
	{
		if (character == x)
			ft_putchar('A');
		if (character > 1 && character < x)
			ft_putchar('B');
		character--;
	}
	if (character == 1 && x != 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (character == 1 && x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	character = x;
}

void	ft_print_middle_line(int x)
{
	int		character;

	character = x;
	while (character > 1)
	{
		if (character == x)
			ft_putchar('B');
		if (character > 1 && character < x)
			ft_putchar(' ');
		character--;
	}
	if (character == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	character = x;
}

void	ft_print_last_line(int x, int y)
{
	int		character;

	character = x;
	while (character > 1)
	{
		if (character == x)
			ft_putchar('C');
		if (character > 1 && character < x)
			ft_putchar('B');
		character--;
	}
	if (character == 1 && y == 1)
	{
		ft_putchar('A');
	}
	if (character == 1 && x == 1 && y != 1)
	{
		ft_putchar('C');
	}
	if (character == 1 && x != 1 && y != 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int		line;

	line = y;
	while (line >= 1)
	{
		if (line == y)
			ft_print_first_line(x);
		if (line < y && line > 1)
			ft_print_middle_line(x);
		if (line == 1 && y != 1)
			ft_print_last_line(x, y);
		line--;
	}
}
