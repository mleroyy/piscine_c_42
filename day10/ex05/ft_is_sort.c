/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:21:17 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/22 14:01:09 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		up;
	int		down;

	up = 1;
	down = 1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			up = 0;
	i = 0;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			down = 0;
	if (up == 1 || down == 1)
		return (1);
	return (0);
}
