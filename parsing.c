/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:42:15 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/29 20:05:49 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

// check numbers
// check double numbers
#include<string.h>
int check_dig(char **s) {
    int i, c;

	i = 0;
    while(s[i])
	{
        c = 0;
        if (strlen(*s) == 1)
		{
            if ((*s[i] >= '0' && *s[i] <= '9'))
                return 1;
			else
                return 0;
        }
		else
		{
            int j = 0;
			while(s[i][j]) 
			{
                if ((s[i][j] >= '0' && s[i][j] <= '9') || s[i][j] == ' ')
                    c++;
                else
                	return 0;
				j++;
            }
            if ((unsigned long)c != strlen(s[i]))
                return 0;
        }
		i++;
    }

    return 1;
}


void	check_ifall_isnumber(char **matrix)
{
	int	i;
	int	j;

	i = 1;
	while (matrix[i])
	{
		j = 0;
		while (matrix[i][j])
		{
			if ((matrix[i][j] == '-' && matrix[i][j + 1] == '-')
				|| (matrix[i][j] == '-' && matrix[i][j + 1] == '+')
				|| (matrix[i][j] == '+' && matrix[i][j + 1] == '-')
				|| (matrix[i][j] == '+' && matrix[i][j + 1] == '+'))
			{
				print_error();
			}
			if ((matrix[i][j] == ' ' && matrix[i][j + 1] == ' '))
				print_error();
			j++;
		}
		if (ft_strcmp(matrix[i], "") == 0)
			print_error();
		i++;
	}
}

void	check_double(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				print_error();
			j++;
		}
		i++;
	}
}

void	parsing_func(char **matrix)
{
	int i;

	i = 0;
	while (matrix[i])
		ft_atoi(matrix[i++]);
	check_double(matrix);
}