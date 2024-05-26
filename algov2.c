/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algov2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:11:54 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/25 14:18:30 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int current_position(t_list *b, t_list *list)
{
    int i;

    i = 0;
    while(b)
    {
        if (b == list)
            return (i);
        else
            b = b->next;
        i++;
    }
    return (i);
}

void    ft_end_sort(t_list **a, t_list **b)
{
    t_list *max;
    
    max = ft_find_max(*b);
    while(*b)
    {
        if ((*b)->value == max->value)
        {
            ft_pa(a, b, 'a');
            max = ft_find_max(*b);
        }
        else if (current_position(*b, max) <= size_of_stack(b)/2)
            ft_rb(b, 'r');
        else
            ft_rrb(b, 'r');
    }
}