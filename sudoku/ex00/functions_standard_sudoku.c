/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_standard_sudoku.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:19:36 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:19:38 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_standard_sudoku.h"

void	print(void)
{
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		print();
		return ;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = (-nbr);
	}
	else if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	init_board(int tab[9][9], char **argv)
{
	int		iterator;
	int		jterator;
	char	*s1;

	iterator = 0;
	while (!(jterator = 0) && iterator < 9)
	{
		s1 = argv[iterator + 1];
		while (jterator < 9)
		{
			if (*s1 == '.')
				tab[iterator][jterator] = 0;
			else if (*s1 >= '1' && *s1 <= '9')
				tab[iterator][jterator] = *s1 - '0';
			else
			{
				ft_putstr("Erreur\n");
				return ;
			}
			jterator++;
			s1++;
		}
		jterator = 0;
		iterator++;
	}
}

void	print_board(int tab[9][9])
{
	int		iterator;
	int		jterator;

	iterator = 0;
	jterator = 0;
	while (iterator < 9)
	{
		while (jterator < 9)
		{
			ft_putnbr(tab[iterator][jterator]);
			if (jterator != 8)
				ft_putchar(' ');
			jterator++;
		}
		ft_putchar('\n');
		jterator = 0;
		iterator++;
	}
}
