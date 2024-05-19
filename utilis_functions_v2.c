/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_functions_v2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:45:43 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/18 10:05:08 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_range(int size)
{
	if (size < 10)
		return (5);
	else if (size < 100)
		return (15);
	else
		return (30);
}

int	size_of_stack(t_list **list)
{
	t_list	*tmp;
	int		i;

	if (!list)
		return (0);
	tmp = *list;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

// int	ft_stil_in_index(t_list *a, int len, int p)
// {
// 	int	i;

// 	i = 0;
// 	while (a)
// 	{
// 		if ((a)->index <= len + p)
// 			return (i);
// 		a = a->next;
// 		i++;
// 	}
// 	return (i);
// }
// t_list	*ft_find_min(t_list **list)
// {
// 	t_list	*curr;
// 	t_list	*min;

// 	curr = *list;
// 	min = *list;
// 	while (curr != NULL)
// 	{
// 		if (min->value > curr->value)
// 			min = curr;
// 		curr = curr->next;
// 	}
// 	return (min);
// }
