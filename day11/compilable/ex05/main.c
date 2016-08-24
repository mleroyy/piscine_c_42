/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:58:30 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 11:11:35 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char **argv)
{
	t_list		*list;

	list = ft_list_push_params(argc, argv);
	ft_print_elem(list);
	return (0);
}
