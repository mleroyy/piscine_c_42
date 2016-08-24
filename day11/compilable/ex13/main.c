/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:58:30 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 15:20:44 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(void)
{
	t_list		*list;
	t_list		*list2;
	char		a;
	char		b;
	char		c;
	char		d;
	void		*p1;
	void		*p2;
	void		*p3;
	void		*p4;

	a = 'a',
	b = 'b';
	c = 'c';
	d = 'd';
	p1 = &a;
	p2 = &b;
	p3 = &c;
	p4 = &d;


	list = ft_create_elem(p1);
	ft_list_push_front(&list, p2);
	ft_list_push_front(&list2, p3);
	ft_list_push_front(&list2, p4);
	ft_print_elem(list);
	ft_print_elem(list2);
	ft_list_merge(&list, &list2);
	ft_print_elem(list);
	return (0);
}
