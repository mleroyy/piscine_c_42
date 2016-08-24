/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 10:32:02 by rcarette          #+#    #+#             */
/*   Updated: 2016/08/21 16:37:07 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_coord
{
	int		x;
	int		y;
	int		len;

}					t_coord;

typedef struct		s_grid
{
	char	ct_l;
	char	ct_r;
	char	cb_l;
	char	cb_r;
	char	rate;
	char	sp_tb;
	char	sp_m;
}					t_grid;

#endif
