/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:41:56 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/30 16:02:53 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_list **a, t_list **b, char c)
{
	t_list *tmp;
	if (!(*b))
		exit(0);
	ft_lstadd_front(a, ft_lstnew((*b)->value));
	tmp = (*b)->next;
	free(*b);
	(*b) = tmp;
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}

void	ft_rb(t_list **list, char c)
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
	if (c == 'b')
		write(1, "rb\n", 3);
}

void	ft_rrb(t_list **list, char c)
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
	if (c == 'b')
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **a, t_list **b, char c)
{
	if (!(*a) || !(*b))
		exit(0);
	ft_rra(a, 'a');
	ft_rrb(b, 'b');
	if (c == 'r')
		write(1, "rrr\n", 4);
}

void	ft_ss(t_list **a, t_list **b, char c)
{
	if (!(*a) || !(*b))
		exit(0);
	ft_sa(a, 'a');
	ft_sb(b, 'b');
	if (c == 's')
		write(1, "ss\n", 3);
}