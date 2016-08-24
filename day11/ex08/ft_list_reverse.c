/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:52:26 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/24 10:57:53 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*p1;
	t_list		*p2;
	t_list		*p3;

	p1 = *begin_list;
	p3 = NULL;
	while (p1 != 0)
	{
		p2 = p1->next;
		p1->next = p3;
		p3 = p1;
		p1 = p2;
	}
	*begin_list = p3;
}
