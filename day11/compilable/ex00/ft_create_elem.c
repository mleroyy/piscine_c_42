/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:58:30 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/22 23:03:48 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(int data)
{
	t_list		*list;

	list = malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
