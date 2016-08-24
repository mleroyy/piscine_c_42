/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:19:57 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:46:58 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error_ac_av.h"
#include "functions_standard_sudoku.h"

int		main(int argc, char **argv)
{
	int		tab[9][9];

	if (check_number_of_parameter(argc) == 1)
	{
		if (check_length_parameter(argc, argv) == 1)
		{
			if (check_character_parameter(argc, argv) == 1)
			{
				if (check_if_number_17_(argc, argv) == 1)
				{
					init_board(tab, argv);
					if (board_is_valid(tab, 0))
						print_board(tab);
					else
						ft_putstr("Erreur");
				}
			}
		}
	}
	return (0);
}
