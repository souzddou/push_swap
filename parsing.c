/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:42:15 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/12 21:08:10 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<limits.h>

// check numbers
// check double numbers

int	check_dig(char	*s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			j++;
		i++;
	}
	if (i == j)
		return (1);
	else
		return (0);
}

void	check_ifall_isnumber(char	**matrix)
{
	int i;
	int	j;

	i = 1;
    while(matrix[i])
    {
        j = 0;
		while(matrix[i][j])
		{
			if (check_dig(matrix[i]) == 0)
			{
				print_error();
			}
			if ((matrix[i][j] == '-' && matrix[i][j+1] == '-') || (matrix[i][j] == '-' && matrix[i][j+1] == '+') || (matrix[i][j] == '+' && matrix[i][j+1] == '-') || (matrix[i][j] == '+' && matrix[i][j+1] == '+'))
			{
				print_error();
			}
			if ((matrix[i][j] == ' ' && matrix[i][j+1] == ' '))
				print_error();
			j++;
		}
		if (ft_strcmp(matrix[i], "") == 0)
			print_error();
		i++;
	}
}
	
void	check_double(char	**s)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = i + 1;
		while(s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				print_error();
			j++;
		}
		i++;
	}
}

void    parsing_func(char **matrix)
{
	int i;

	i = 0;
	while(matrix[i])
		ft_atoi(matrix[i++]);
	check_double(matrix);
}