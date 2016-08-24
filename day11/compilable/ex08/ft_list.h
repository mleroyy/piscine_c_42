/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:55:02 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/23 11:47:03 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

void	ft_print_elem(t_list *begin_list);
t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list,void *data);
void	ft_list_reverse(t_list **begin_list);
#endif
