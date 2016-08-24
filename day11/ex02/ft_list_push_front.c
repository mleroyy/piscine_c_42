/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 16:45:14 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 15:55:52 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*list;
	t_list		*new;

	if (*begin_list == NULL)
	{
		list = ft_create_elem(data);
		*begin_list = list;
	}
	else
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
}
