/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:44:57 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/30 16:03:17 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(int *tab, int p1, int p2)
{
	int	tmp;

	tmp = tab[p1];
	tab[p1] = tab[p2];
	tab[p2] = tmp;
}

void	*bubble_sort(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(tab, j, j + 1);
			j++;
		}
		i++;
	}
	return (tab);
}

void	*sort_arr(int *tab, int size)
{
	int	*arr;

	if (size <= 1)
		return (NULL);
	arr = bubble_sort(tab, size);
	return (arr);
}

char	**read_numbers(int ac, char **av)
{
	int		i;
	char	*s;
	char	**strs;

	if (ac < 2)
		exit(1);
	i = 1;
	s = NULL;
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
