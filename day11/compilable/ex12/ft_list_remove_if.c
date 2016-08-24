/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:16:00 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 16:23:56 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_clean_body(t_list *before, t_list *temp)
{
	t_list		*e;

	e = temp;
	before->next = temp->next;
	free(e);
	e = NULL;
}

t_list	*ft_clean_head(t_list *list)
{
	t_list		*e;

	e = list;
	list = list->next;
	free(e);
	e = NULL;
	return (list);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*before;
	t_list		*temp;

	before = *begin_list;
	temp = *begin_list;

	while ((*cmp)(temp->data, data_ref) == 0)
	{
		*begin_list = ft_clean_head(*begin_list);
		temp = temp->next;
	}
	while (temp != NULL)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
		{
			ft_clean_body(before, temp);
			temp = temp->next;
		}
		else
		{
			before = temp;
			temp = temp->next;
		}
	}
}
