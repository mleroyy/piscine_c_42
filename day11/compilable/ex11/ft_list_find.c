/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:01:26 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 14:12:31 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list		*p;

	p = begin_list;
	while (p != 0)
	{
		if ((*cmp)(p->data, data_ref) == 0)
			return (p);
		p = p->next;
	}
	return (0);
}
