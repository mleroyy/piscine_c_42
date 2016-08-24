/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:36:50 by rcarette          #+#    #+#             */
/*   Updated: 2016/08/21 16:38:58 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_grid.h"

void	ft_grid(t_grid *g, int sel_grid)
{
	const t_grid g0 = {'o', 'o', 'o', 'o', '|', '-', ' '};
	const t_grid g1 = {'/', '\\', '\\', '/', '*', '*', ' '};
	const t_grid g2 = {'A', 'A', 'C', 'C', 'B', 'B', ' '};
	const t_grid g3 = {'A', 'C', 'A', 'C', 'B', 'B', ' '};
	const t_grid g4 = {'A', 'C', 'C', 'A', 'B', 'B', ' '};

	if (sel_grid == 0)
		*g = g0;
	if (sel_grid == 1)
		*g = g1;
	if (sel_grid == 2)
		*g = g2;
	if (sel_grid == 3)
		*g = g3;
	if (sel_grid == 4)
		*g = g4;
}

void	ft_fill(char *s, t_coord c, t_coord k, t_grid g)
{
	if (c.y == 1)
	{
		if (c.x == 1)
			*s = g.ct_l;
		else if (c.x == k.x)
			*s = g.ct_r;
		else
			*s = g.sp_tb;
	}
	else if (c.y == k.y)
	{
		if (c.x == 1)
			*s = g.cb_l;
		else if (c.x == k.x)
			*s = g.cb_r;
		else
			*s = g.sp_tb;
	}
	else
	{
		if (c.x == 1 || c.x == k.x)
			*s = g.rate;
		else
			*s = g.sp_m;
	}
}

char	*ft_colle(char *str, t_coord k, int grid)
{
	char		*s;
	t_coord		c;
	t_grid		g;

	s = str;
	ft_grid(&g, grid);
	c.y = 0;
	while (++c.y <= k.y)
	{
		c.x = 0;
		while (++c.x <= k.x)
		{
			ft_fill(s, c, k, g);
			++s;
		}
		*s = '\n';
		++s;
	}
	return (str);
}

int		ft_comp(char *str_buff, char *str_gen)
{
	int		i;

	i = 0;
	while (str_buff[i] && str_gen[i] && str_buff[i] == str_gen[i])
		i++;
	if (str_buff[i] == '\0' && str_gen[i] == '\0')
		return (1);
	else
		return (0);
}

void	put_comp(char *str_buff, char *str_gen, t_coord k)
{
	int		grid;
	int		count;

	count = 0;
	grid = -1;
	while (++grid <= 4)
	{
		if (ft_comp(str_buff, ft_colle(str_gen, k, grid)))
		{
			if (count)
			{
				write(1, " || [colle-0", 12);
			}
			else
				write(1, "[colle-0", 8);
			ft_putnbr(grid);
			write(1, "] [", 3);
			ft_putnbr(k.x);
			write(1, "] [", 3);
			ft_putnbr(k.y);
			write(1, "]", 1);
			++count;
		}
	}
	count ? write(1, "\n", 1) : write(1, "aucune\n", 7);
}
