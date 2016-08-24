/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:54:50 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 13:03:16 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list		*list_ptr;

	list_ptr = begin_list;
	while (list_ptr != 0)
	{	if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			(*f)(list_ptr->data);
			list_ptr = list_ptr->next;
		}
	}
}
