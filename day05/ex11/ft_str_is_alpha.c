/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 22:46:19 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/11 10:00:48 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
