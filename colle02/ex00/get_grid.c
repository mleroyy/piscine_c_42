/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 11:19:14 by rcarette          #+#    #+#             */
/*   Updated: 2016/08/21 22:08:15 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_grid.h"
#include "find_grid.h"
#include "stdio.h"

void	ft_putnbr(int nb)
{
	char	to_disp[10];
	int		i;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
		ft_putchar('-');
	i = 9;
	while (nb != 0)
	{
		to_disp[i] = (nb < 0 ? -1 : 1) * (nb % 10) + '0';
		nb /= 10;
		--i;
	}
	while (++i <= 9)
		ft_putchar(to_disp[i]);
}

void	ft_getsize(char *str, t_coord *k)
{
	int		i;

	k->y = 0;
	k->x = 0;
	k->len = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n' && k->y == 0)
			k->x = i;
		if (str[i] == '\n')
			++k->y;
	}
	k->len = i;
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return ((i - 1));
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len;
	int		i;

	i = -1;
	len = 0;
	s1 ? len = ft_strlen(s1) : 0;
	s2 ? len += ft_strlen(s2) : 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		while (s1 && *s1)
			str[++i] = *(s1++);
		while (s2 && *s2)
			str[++i] = (*s2++);
		str[++i] = '\0';
	}
	return (str);
}

int		main(void)
{
	int		ret;
	char	buff[SIZE_BUF];
	char	*str;
	char	*s;
	t_coord k;

	ret = 1;
	while ((ret = read(0, &buff, SIZE_BUF)))
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	if (str && *str > 32)
	{
		ft_getsize(str, &k);
		s = malloc(sizeof(char) * k.len + 1);
		s[k.len] = '\0';
		s ? put_comp(str, s, k) : 0;
	}
	else
		write(1, "aucune\n", 7);
	return (0);
}
