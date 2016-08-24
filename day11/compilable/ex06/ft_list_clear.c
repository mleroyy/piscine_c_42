/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 17:31:56 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/24 08:38:39 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list		*p;
	t_list		*tmp;

	if (*begin_list != NULL)
	{
		tmp = NULL;
		p = *begin_list;
		while (p != 0)
		{
			tmp = p;
			p = p->next;
			free(tmp);
		}
		*begin_list = NULL;
	}
}
