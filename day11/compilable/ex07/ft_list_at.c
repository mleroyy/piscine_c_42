/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 17:37:08 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 11:26:55 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*p;
	t_list			*t;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;

	p = begin_list;
	t = begin_list;

	while (t->next != 0)
	{
		j++;
		t = t->next;
	}
	if (nbr == 0 || nbr > j)
		p = NULL;
	else
		while (i < nbr)
		{
			p = p->next;
			i++;
		}
	return (p);
}
