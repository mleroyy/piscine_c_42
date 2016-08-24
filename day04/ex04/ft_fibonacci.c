/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 14:11:53 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/08 22:29:40 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		valeur;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2 && index < 47)
		valeur = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if (index >= 47)
		return (0);
	return (valeur);
}
