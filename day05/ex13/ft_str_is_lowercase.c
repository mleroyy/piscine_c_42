/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 23:03:20 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/10 21:30:20 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
