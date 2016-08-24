/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:32:52 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/04 14:56:05 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_elem(char *a, char *b, char *c, char *d)
{
	ft_putchar(*a);
	ft_putchar(*b);
	ft_putchar(' ');
	ft_putchar(*c);
	ft_putchar(*d);
	if (!(*a == '9' && *b == '8' && *c == '9' && *d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_loop(char *a, char *b, char *c, char *d)
{
	while (*a <= '9')
	{
		while (*b <= '9')
		{
			while (*c <= '9')
			{
				while (*d <= '9')
				{
					ft_print_elem(a, b, c, d);
					(*d)++;
				}
				(*c)++;
				(*d) = '0';
			}
			(*b)++;
			*c = (*a);
			*d = (*b) + 1;
		}
		*b = '0';
		(*a)++;
		*c = *a;
		*d = (*b) + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_loop(&a, &b, &c, &d);
}
