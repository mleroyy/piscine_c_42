/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:01:03 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 15:20:39 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list **begin_list2)
{
	t_list		*p;

	p = *begin_list;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = *begin_list2;
}
