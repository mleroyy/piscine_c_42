/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 11:19:48 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/24 11:21:52 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*param;
	t_list		*tmp;
	int			i;

	i = 0;
	param = 0;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = param;
		param = tmp;
		i++;
	}
	return (param);
}
