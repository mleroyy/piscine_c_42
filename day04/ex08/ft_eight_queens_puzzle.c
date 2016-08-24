/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 21:18:59 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/09 11:27:06 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_auxiliaire(int solution)
{
	if (solution == 92)
		return (solution);
	else
		return (ft_auxiliaire(solution + 1));
}

int		ft_eight_queens_puzzle(void)
{
	int		solution;

	solution = 0;
	if (solution == 92)
		return (solution);
	else
		return (ft_auxiliaire(solution + 1));
}
