/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:54:44 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 12:22:08 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*list_ptr;

	list_ptr = begin_list;
	while (list_ptr != 0)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
