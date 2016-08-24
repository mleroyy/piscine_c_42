/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:59:39 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/21 01:21:46 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_operation(char c, int val1, int val2)
{
	int		res;
	int		(*f)(int, int);

	f = 0;
	if (c == '+')
		f = &ft_sum;
	if (c == '-')
		f = &ft_minus;
	if (c == '/')
		f = &ft_div;
	if (c == '%')
		f = &ft_mod;
	if (c == '*')
		f = &ft_mult;
	res = f(val1, val2);
	ft_putnbr(res);
	ft_putchar('\n');
}

int		ft_is_valid(char c, int val2)
{
	if (c == '/' && val2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (c == '%' && val2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char **argv)
{
	int		val1;
	int		val2;
	int		i;
	char	k;

	i = 0;
	if (argc != 4)
		return (0);
	while (argv[2][i])
		i++;
	k = argv[2][0];
	if (i != 1 || (k != '+' && k != '-' && k != '/' && k != '%' && k != '*'))
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (ft_is_valid(argv[2][0], val2) == 0)
		return (0);
	ft_operation(argv[2][0], val1, val2);
	return (0);
}
