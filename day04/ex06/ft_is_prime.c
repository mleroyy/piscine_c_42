/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:29:26 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/09 12:14:21 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_impair(int nb, int soustraction, int count)
{
	if (nb <= 0)
		return (count + 1);
	else
	{
		nb -= soustraction;
		return (ft_sqrt_impair(nb, soustraction + 2, count + 1));
	}
}

int		ft_sqrt(int nb)
{
	int		result;

	result = ft_sqrt_impair(nb, 1, 0);
	return (result);
}

int		ft_is_prime(int nb)
{
	int		i;
	int		max;

	i = 2;
	max = ft_sqrt(nb);
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	while (i < max)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
