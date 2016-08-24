/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 11:33:04 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/14 01:13:58 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_put_in_tab(char *tab, int argc, char **argv, int *ptr)
{
	ptr[0] = 1;
	ptr[1] = 0;
	while (ptr[0] < argc)
	{
		while (argv[ptr[0]][ptr[1]] != 0)
		{
			tab[ptr[2]] = argv[ptr[0]][ptr[1]];
			ptr[2]++;
			ptr[1]++;
		}
		if (ptr[0] < argc - 1)
			tab[ptr[2]] = '\n';
		else
			tab[ptr[2]] = '\0';
		ptr[2]++;
		ptr[0]++;
		ptr[1] = 0;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		ptr[4];
	char	*tab;

	ptr[0] = 1;
	ptr[1] = 0;
	ptr[2] = 0;
	ptr[3] = 0;
	tab = NULL;
	while (ptr[0] < argc)
	{
		while (argv[ptr[0]][ptr[1]] != 0)
			ptr[1]++;
		ptr[3] = ptr[3] + ptr[1] + 1;
		ptr[1] = 0;
		ptr[0]++;
	}
	tab = (char *)malloc(sizeof(char) * ptr[3]);
	ft_put_in_tab(tab, argc, argv, ptr);
	return (tab);
}
