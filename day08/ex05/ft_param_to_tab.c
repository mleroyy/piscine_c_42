/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:20:41 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/18 12:52:54 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char					*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = 0;
	while (str[i] != 0)
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	while (str[i] != 0)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*my_struct;

	i = 0;
	my_struct = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		my_struct[i].size_param = ft_strlen(av[i]);
		my_struct[i].str = av[i];
		my_struct[i].copy = ft_strdup(av[i]);
		my_struct[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	my_struct[i].str = 0;
	return (my_struct);
}
