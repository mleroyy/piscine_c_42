/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_v2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 19:54:22 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/09 11:36:24 by mleroy           ###   ########.fr       */
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

int		ft_is_prime_aux(int nb, int i)
{
	if (i == nb)
		return (1);
	if (nb % i == 0)
		return (0);
	else
		return (ft_is_prime_aux(nb, i + 1));
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

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		else
			nb++;
	}
}
