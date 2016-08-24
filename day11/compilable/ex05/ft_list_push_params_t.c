/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinverni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:35:02 by tinverni          #+#    #+#             */
/*   Updated: 2016/08/23 18:12:36 by tinverni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*chaine;
	t_list		*tmp;
	int			i;

	i = 0;
	chaine = 0;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = chaine;
		chaine = tmp;
		i++;
	}
	return (chaine);
}
