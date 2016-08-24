/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 16:02:39 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 00:08:42 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*list;
	t_list		*st;
	t_list		*new;

	list = *begin_list;
	st = *begin_list;

	if (*begin_list == NULL)
	{
		list = ft_create_elem(data);
		*begin_list = list;
	}
	else
		while (st->next != NULL)
		{
			st = st->next;
		}
		new = ft_create_elem(data);
		st->next = new;
}
