/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 23:17:19 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/05 14:50:19 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_char(char *str, int *i, int *h)
{
	while (str[*i] == ' ' || str[*i] == '\n')
	{
		(*i)++;
	}
	while (str[*i] == '\t' || str[*i] == '\r')
	{
		(*i)++;
	}
	while (str[*i] == '\f' || str[*i] == '\v')
	{
		(*i)++;
	}
	if (str[*i] == '-' && (str[(*i) + 1] >= '0' && str[(*i) + 1] <= '9'))
	{
		*h = -1;
		(*i)++;
	}
	else if (str[*i] == '+' && (str[(*i) + 1] >= '0' && str[(*i) + 1] <= '9'))
	{
		(*i)++;
	}
}

void	ft_calculate(char *str, int *i, int *j, int *integer)
{
	(*j)++;
	if ((*j) == 1)
	{
		(*integer) = (*integer) + (str[(*i)] - 48);
	}
	else
	{
		(*integer) = (*integer) * 10 + (str[(*i)] - 48);
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		h;
	int		integer;

	i = 0;
	j = 0;
	h = 1;
	integer = 0;
	ft_check_char(str, &i, &h);
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ft_calculate(str, &i, &j, &integer);
		}
		else
		{
			integer *= h;
			return (integer);
		}
		i++;
	}
	integer *= h;
	return (integer);
}
