/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 22:35:03 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/10 18:50:22 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'))
			str[i] -= 32;
		i++;
	}
	return (str);
}