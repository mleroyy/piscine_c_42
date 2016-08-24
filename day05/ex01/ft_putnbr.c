/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 12:56:32 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/10 17:37:24 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		a;
	char	*negative_limit;

	negative_limit = "-2147483648";
	if (nb == -2147483648)
		ft_putstr(negative_limit);
	else
	{
		if (nb < 0 && nb != -2147483648)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			a = nb / 10;
			ft_putnbr(a);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + 48);
	}
}
