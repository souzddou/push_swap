/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/17 17:22:44 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_var	var;
	t_list	*a;
	t_list	*b;
	t_list	*tmp1;

	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		check_ifall_isnumber(av);
		var.matrix = read_numbers(ac, av);
		// parsing_func(var.matrix);
		i = 0;
		while (var.matrix[i])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(var.matrix[i++])));
		}
		// i = 0;
		// t_list *tmp = a;
		// while(tmp)
		// {
		// 	var.s[i] = tmp->value;
		// 	// printf("%d", var.s[i]);
		// 	tmp = tmp->next;
		// 	i++;
		// }
		tmp1 = a;
		while (tmp1)
		{
			printf(" stack_a :%d\n", tmp1->value);
			tmp1 = tmp1->next;
		}
		// printf("%p\n", (ft_find_min(&a)));
		// ft_sa(&a, 'a');
		// ft_pa(&b, &a, 'b');
		// ft_pa(&b, &a, 'b');
		// ft_pa(&b, &a, 'b');
		// ft_ra(&a, 'a');
		// ft_rb(&b, 'b');
		// ft_rrr(&a, &b, 'r');
		// ft_sa(&a, 'a');
		// ft_pa(&a, &b, 'a');
		// ft_pa(&a, &b, 'a');
		// ft_pa(&a, &b, 'a');
		// t_list *tmp = a;
		ft_sort(&a, &b);
		// printf("%p", b);
		// t_list *tp = b;
		// while (tp)
		// {
		// 	printf("after :%d\n", tp->value);
		// 	tp = tp->next;
		// }
		// printf("\n");
		// while(a)
		// {
		// 	printf("after :%d\n", a->value);
		// 	a = a->next;
		// }
		// printf("%d",get_index_arr(sort_arr(var.s), 5, 3));
		// if (ac - 1 == 2)
		// 	ft_sort_two(a);
		// if (ac == 4)
		// {
		// 	ft_sort_three(a);
		// }
		// t_list *tmp = a;
		// while(tmp)
		// {
		// 	printf("%d\n", tmp->value);
		// 	tmp = tmp->next;
		// }
		return (0);
	}
	return (1);
}

// size_stack = 5
// index_stack:  0  1  2  3  4
// 5  6  2  4  8
// index_arr :   2  3  0  1  4
// max =