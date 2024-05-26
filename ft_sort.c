/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:12:44 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/25 18:10:50 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_position(t_list *b, int v)
{
    int i;

    i = 0;
    while(b)
    {
        if (b->value == v)
            return (i);
        else
            b = b->next;
        i++;
    }
    return (i);
}

void ft_sort_three(t_list **a)
{
	t_list *max;
	t_list *last;

	last = ft_lstlast(*a);
	max = ft_find_max(*a);
	while(max->value != last->value)
	{
		ft_ra(a, 'a');
		last = ft_lstlast(*a);
	}
	if ((*a)->value > (*a)->next->value)
		ft_sa(a, 'a');
}