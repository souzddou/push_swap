/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/13 14:39:22 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var var;
	t_list	**a;
	a = NULL;
	t_list	*s;
	// t_list	*b;
	int	i;

	(void)var;
	if (ac < 2)
		exit(1);
	check_ifall_isnumber(av);
	var.matrix = read_numbers(ac, av);
	parsing_func(var.matrix);
	
	i = 0;
	while(var.matrix[i])
	{
		int v = ft_atoi(var.matrix[i]);
		s = ft_lstnew(v);
		printf("here : %p\n", s);
		if (s == NULL)
			return(0);
		// print_error();
		ft_lstadd_back(a, s);
		i++;
	}
	// t_list *tmp = *a;
	// while(tmp)
	// {
	// 	printf("here 2 : %d", tmp->value);
	// 	tmp = tmp->next;
	// }
	
}