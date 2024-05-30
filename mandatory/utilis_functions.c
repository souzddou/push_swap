/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:42:27 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/30 16:03:23 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_error(void)
{
	write(2, "error", 5);
	exit(1);
}
int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	neg;
	long	res;

	res = 0;
	neg = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if ((res * neg) > 2147483647 || (res * neg) < -2147483648)
			print_error();
		i++;
	}
	return (res * neg);
}

int	get_index_arr(int *arr, int len, int nb)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == nb)
			return (i);
		i++;
	}
	return (i);
}

int	get_index_stack(t_list *a, int nb)
{
	t_list *tmp;
	int i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		if (tmp->value == nb)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}