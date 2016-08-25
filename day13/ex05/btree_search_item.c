/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:53:52 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/25 12:39:50 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*value;

	value = 0;
	if (root)
	{
		value = btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0 && value == 0)
			return (root->item);
		if (value == 0)
			value = btree_search_item(root->right, data_ref, cmpf);
	}
	return (0);
}
