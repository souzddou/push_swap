/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/28 16:12:40 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_var	var;
	t_list	*a;
	t_list	*b;

	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		// check_ifall_isnumber(av);
		var.matrix = read_numbers(ac, av);
		// parsing_func(var.matrix);
		i = 0;
		while (var.matrix[i])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(var.matrix[i++])));
		}
		ft_begin_sort(&a, &b);
		// ft_end_sort(&a, &b);
		while(b)
		{
			printf("after we sort :%d\n", b->value);
			b = b->next;
		}
		return (0);
	}
	return (1);
}