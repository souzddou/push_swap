/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:44:57 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/28 19:36:16 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

void	swap(int *tab, int p1, int p2)
{
	int tmp = tab[p1];
	tab[p1] = tab[p2];
	tab[p2] = tmp;
}

void	*bubble_sort(int *tab, int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(tab, j, j + 1);
			j++;
		}
		i++;
	}
	return(tab);
}

void	*sort_arr(int *tab, int size)
{
	int *arr;
	if (size <= 1)
		return (NULL);
	arr = bubble_sort(tab, size);
	return(arr);
}

char	**read_numbers(int ac, char **av)
{
	int i;
	char *s;
	char **strs;

	if (ac < 2)
		exit(1);
	i = 1;
	s = ft_strdup("");
	if (ft_strcmp(av[i], " ") == 0)
		return (NULL);
	while (i < ac)
	{
		s = ft_strjoin(s, av[i]);
		s = ft_strjoin(s, " ");
		i++;
	}
	strs = ft_split(s, ' ');
	free(s);
	return (strs);
}
