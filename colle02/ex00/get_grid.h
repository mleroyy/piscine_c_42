/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_grid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 10:27:37 by rcarette          #+#    #+#             */
/*   Updated: 2016/08/21 16:46:54 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_GRID_H
# define GET_GRID_H
# define SIZE_BUF 4096
# include "find_grid.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "struct.h"

void	ft_putnbr(int nb);
void	ft_getsize(char *str, t_coord *k);
int		ft_strlen(char	*str);
char	*ft_strjoin(char *s1, char *s2);
char	ft_putchar(char c);
int		ft_comp(char *str_buff, char *str_gen);
void	put_comp(char *str_buff, char *str_gen, t_coord k);

#endif
