/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 14:51:25 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/10 09:07:28 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_impair(int nb, int soustraction, int count)
{
	if (nb <= 0)
		return (count);
	else
	{
		nb -= soustraction;
		return (ft_sqrt_impair(nb, soustraction + 2, count + 1));
	}
}

int		ft_sqrt(int nb)
{
	int		result;

	result = 0;
	result = ft_sqrt_impair(nb, 1, 0);
	if ((result * result) == nb)
		return (result);
	return (0);
}
