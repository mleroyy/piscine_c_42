/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 21:46:15 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/11 22:11:35 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[x])
	{
		if (str[x] != to_find[i])
			x++;
		else
		{
			while (str[i + x] == to_find[i])
			{
				if (to_find[i + 1] == '\0')
					return (str + x);
				i++;
			}
			i = 0;
			x++;
		}
	}
	return (0);
}
