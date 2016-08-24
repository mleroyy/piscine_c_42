/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 00:05:51 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/10 21:26:55 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;
	int		h;

	i = 0;
	j = 0;
	h = 0;
	while (src[h])
		h++;
	if (size == 0)
		return (h);
	while (size - 1 > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		size--;
	}
	dest[i] = '\0';
	return (h);
}
