/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_grid.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:42:19 by rcarette          #+#    #+#             */
/*   Updated: 2016/08/21 16:47:20 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_GRID_H
# define FIND_GRID_H
# include "get_grid.h"
# include "struct.h"

void	ft_grid(t_grid *g, int sel_grid);
void	ft_fill(char *s, t_coord c, t_coord k, t_grid g);
char	*ft_colle(char *str, t_coord k, int grid);
int		ft_comp(char *str_buff, char *str_gen);
void	ft_put_comp(char *str_buff, char *str_gen, t_coord k);

#endif
