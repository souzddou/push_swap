/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algov1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:11:46 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/28 16:11:39 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    *create_array(t_list **a)
{
    int i;
    int *s;
    
    i = 0;
	t_list *tmp = *a;
    s = malloc(sizeof(int) * size_of_stack(a));
	while(tmp)
	{
		s[i] = tmp->value;
		tmp = tmp->next;
		i++;
	}
    return(s);
}

int	ft_stil_in_index(t_list *a, int size, int r)
{
	int	i;

	i = 0;
	while (a)
	{
		if ((a)->index <= size + r)
			return (i);
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_begin_sort(t_list **a, t_list **b)
{
	int	r;
	int	size_b;
	int len;
	int *arr;
	
	len = size_of_stack(a);
	arr = create_array(a);
	size_b = 0;
	r = get_range(size_of_stack(a));
	while (*a)
	{
		(*a)->index = get_index_arr(sort_arr(arr, len), len, (*a)->value);
		if ((*a)->index <= size_b)
		{
			ft_pa(b, a, 'b');
			ft_rb(b, 'b');
			size_b++;
		}
		else if ((*a)->index <= size_b + r)
		{
			ft_pa(b, a, 'b');
			size_b++; 
		}
		else if (ft_stil_in_index(*a, size_b, r) <= size_of_stack(a) / 2)
			ft_ra(a, 'a');
		else
			ft_rra(a, 'a');
	}
}