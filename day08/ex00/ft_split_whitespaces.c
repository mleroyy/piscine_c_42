/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 23:58:21 by mleroy            #+#    #+#             */
/*   Updated: 2016/08/17 23:59:20 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_the_number_of_words(char *str)
{
	int		i;
	int		result;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (!str[i])
		return (0);
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				result++;
		}
		i++;
	}
	return (result);
}

void	count_the_character(char *str, char ***board)
{
	int		i;
	int		x;
	int		j;

	i = 0;
	x = 0;
	while (!(j = 0) && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		while (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			j++;
			i++;
		}
		if (j > 0)
		{
			(*board)[x] = (char *)malloc(sizeof(char) * (j + 1));
			x++;
		}
		j = 0;
		i++;
	}
}

void	insert_the_character(char *str, char ***board, int result)
{
	int		i;
	int		x;
	int		j;

	i = 0;
	x = 0;
	while (!(j = 0) && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	while (str[i] && x < result)
	{
		while (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			(*board)[x][j] = str[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			(*board)[x][j] = '\0';
			x++;
		}
		j = 0;
		i++;
	}
	(*board)[x] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		result;
	char	**board;

	result = count_the_number_of_words(str);
	board = (char **)malloc(sizeof(char *) * (result + 1));
	if (board != NULL)
	{
		count_the_character(str, &board);
		insert_the_character(str, &board, result);
	}
	return (board);
}
