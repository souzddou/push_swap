/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:42:15 by souzddou          #+#    #+#             */
/*   Updated: 2024/06/07 19:01:54 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	extra_chec_mouline(char **av, int i, int j)
{
	if ((av[i][j] == '-' && av[i][j + 2] == '-') || (av[i][j] == '+' && av[i][j
			+ 2] == '-') || (av[i][j] == '-' && av[i][j + 2] == '+')
		|| (av[i][j] == '+' && av[i][j + 2] == '+'))
		print_error();
	if (av[i][j] == ' ' && av[i][j])
		print_error();
}

void	check_dig(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (((av[i][j] >= '0' && av[i][j] <= '9') && ((av[i][j + 1] == '-'
							|| av[i][j + 1] == '+')) && (av[i][j + 2] >= '0'
						&& av[i][j + 2] <= '9')))
				print_error();
			extra_chec_mouline(av, i, j);
			if ((av[i][j] == '-' || av[i][j] == '+') && (av[i][j + 1] == 32))
				print_error();
			if ((av[i][j] == '-' || av[i][j] == '+') && (av[i][j + 1]))
				j++;
			if (((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' '))
				j++;
			else
				print_error();
		}
		i++;
	}
}

void	check_double(int ac, char **s)
{
	int	i;
	int	j;

	(void)ac;
	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
			{
				print_error();
			}
			j++;
		}
		i++;
	}
}

void	parsing_func(int ac, char **av)
{
	check_dig(ac, av);
}
