/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:32:56 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/14 00:15:50 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int min, int max)
{
	int		count;

	count = 0;
	while (min < max)
	{
		min++;
		count++;
	}
	return (count);
}

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	int		count;

	i = 0;
	count = ft_size(min, max);
	tab = malloc(sizeof(int) * count + 1);
	if (tab == NULL || min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}
