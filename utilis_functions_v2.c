/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_functions_v2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:45:43 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/25 15:13:28 by souzddou         ###   ########.fr       */
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

t_list *ft_find_max(t_list *b)
{
    t_list *tmp;
    t_list *max;
    
    if (!b)
		return (NULL);
	max = b;
    tmp = b->next;
    while (tmp)
    {
        if (tmp->value > max->value)
            max = tmp;
        tmp = tmp->next;
    }
    return (max);
}

t_list *ft_find_min(t_list *a)
{
    t_list *tmp;
    t_list *min;
    
    if (!a)
		return (NULL);
	min = a;
    tmp = a->next;
    while (tmp)
    {
        if (tmp->value < min->value)
            min = tmp;
        tmp = tmp->next;
    }
    return (min);
}