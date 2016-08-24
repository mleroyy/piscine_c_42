/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 16:54:38 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 21:13:30 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list		*last;

	last = begin_list;
	if (begin_list == NULL)
		return (NULL);
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
	}
	return (last);
}
