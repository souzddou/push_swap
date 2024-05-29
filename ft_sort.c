/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:12:44 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/28 20:49:24 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int ft_position(t_list *b, int v)
// {
//     int i;

//     i = 0;
//     while(b)
//     {
//         if (b->value == v)
//             return (i);
//         else
//             b = b->next;
//         i++;
//     }
//     return (i);
// }

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

void    ft_sort_four(t_list **a, t_list**b)
{
    t_list *max;
    
    max = ft_find_min(*a);
    int *s = create_array(a);
    int index = get_index_arr(s, size_of_stack(a), max->value);
    while(index)
    {
        ft_ra(a, 'a');
        index--;
    }
    ft_pa(b, a, 'b'); //push max to b
    // t_list *tmp =*a; 
    // while(tmp)
    // {
    //     printf("%d\n", tmp->value);
    //     tmp = tmp->next;
    // }
    ft_sort_three(a);
    ft_pa(a, b, 'a');
}

void    ft_sort_five(t_list **a, t_list **b)
{
    t_list *max;
    
    max = ft_find_min(*a);
    int *s = create_array(a);
    int index = get_index_arr(s, size_of_stack(a), max->value);
    while(index)
    {
        ft_ra(a, 'a');
        index--;
    }
    ft_pa(b, a, 'b'); //push max to b
    ft_sort_four(a, b);
}