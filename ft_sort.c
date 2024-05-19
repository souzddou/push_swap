/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:12:44 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/13 16:58:37 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list *a)
{
	t_list	*tmp;
	int		swap;

	tmp = a;
	swap = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = swap;
}

void	ft_sort_two1(t_list *a)
{
	t_list	*tmp;
	int		swap;

	tmp = a;
	swap = tmp->value;
	tmp->value = tmp->next->next->value;
	tmp->next->next->value = swap;
}

void	ft_sort_three(t_list *a)
{
	t_list *tmp;
	tmp = a;
	if (tmp->next->value > tmp->value
		&& tmp->next->value < tmp->next->next->value
		&& tmp->next->next->value > tmp->value)
		return ;
	// if (tmp->next->value < tmp->value)
	//     ft_sort_two(tmp);
	if (tmp->next->value > tmp->next->next->value
		&& tmp->value < tmp->next->value)
		ft_sort_two(tmp->next);
	if (tmp->next->value > tmp->next->next->value
		&& tmp->next->value > tmp->next->next->value)
	{
		ft_sort_two1(tmp);
	}
}