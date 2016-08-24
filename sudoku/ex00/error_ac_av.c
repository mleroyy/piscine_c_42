/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_ac_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:18:32 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:40:19 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error_ac_av.h"
#include "functions_standard_sudoku.h"

int		check_number_of_parameter(int argc)
{
	if (argc == 10)
		return (1);
	ft_putstr("Erreur\n");
	return (0);
}

int		check_length_parameter(int argc, char **argv)
{
	int		iterator;
	char	*s1;

	iterator = 1;
	while (iterator < argc)
	{
		s1 = argv[iterator];
		if (ft_strlen(s1) != 9)
		{
			ft_putstr("Erreur\n");
			return (0);
		}
		iterator++;
	}
	return (1);
}

int		check_character_parameter(int argc, char **argv)
{
	int		iterator;
	char	*s1;

	iterator = 1;
	while (iterator < argc)
	{
		s1 = argv[iterator];
		while (*s1)
		{
			if (*s1 != '.' && !(*s1 >= '1' && *s1 <= '9'))
			{
				ft_putstr("Erreur\n");
				return (0);
			}
			s1++;
		}
		iterator++;
	}
	return (1);
}

int		check_if_number_17_(int argc, char **argv)
{
	int		iterator;
	char	*s1;
	int		number;

	iterator = 1;
	number = 0;
	while (iterator < argc)
	{
		s1 = argv[iterator];
		while (*s1)
		{
			if (*s1 >= '1' && *s1 <= '9')
				number++;
			s1++;
		}
		iterator++;
	}
	if (number >= 17)
		return (1);
	ft_putstr("Erreur\n");
	return (0);
}
