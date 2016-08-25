/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:58:30 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 10:59:25 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(void)
{
	t_list		*list;
	char		a;
	char		b;
	char		c;
	char		d;
	void		*p1;
	void		*p2;
	void		*p3;
	void		*p4;

	a = 'K',
	b = '2';
	c = '8';
	d = 'E';
	p1 = &a;
	p2 = &b;
	p3 = &c;
	p4 = &d;


	list = ft_create_elem(p1);
	ft_list_push_front(&list, p2);
	ft_list_push_front(&list, p3);
	ft_list_push_front(&list, p4);
	ft_print_elem(list);
	ft_print_elem(ft_list_last(list));
	return (0);
}