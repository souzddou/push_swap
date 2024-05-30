/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionv1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:41:17 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/30 16:02:48 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_list **list, char c)
{
	t_list	*tmp;
	int		swap;

	tmp = *list;
	swap = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = swap;
	if (c == 'a')
		write(1, "sa\n", 3);
	(void)c;
}

void	ft_sb(t_list **list, char c)
{
	t_list	*tmp;
	int		swap;

	tmp = *list;
	swap = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = swap;
	if (c == 'b')
		write(1, "sb\n", 3);
}

void	ft_ra(t_list **list, char c)
{
	t_list	*first_node;
	t_list	*last_node;

	last_node = *list;
	first_node = *list;
	if (*list == NULL || (*list)->next == NULL)
		return ;
	while (last_node->next != NULL)
		last_node = last_node->next;
	*list = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
	if (c == 'a')
		write(1, "ra\n", 3);
	(void)c;
}

void	ft_rra(t_list **list, char c)
{
	t_list	*last_node;
	t_list	*prev_laste_node;

	prev_laste_node = NULL;
	last_node = *list;
	if (*list == NULL || (*list)->next == NULL)
		return ;
	while (last_node->next != NULL)
	{
		prev_laste_node = last_node;
		last_node = last_node->next;
	}
	if (prev_laste_node)
	{
		prev_laste_node->next = NULL;
		last_node->next = *list;
		*list = last_node;
	}
	if (c == 'a')
		write(1, "rra\n", 4);
}

void	ft_rr(t_list **a, t_list **b, char c)
{
	if (!(*a) || !(*b))
		exit(0);
	ft_ra(a, 'a');
	ft_rb(b, 'b');
	if (c == 'r')
		write(1, "rr\n", 3);
}