/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/25 18:11:23 by souzddou         ###   ########.fr       */
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
		tmp1 = a;
		while (tmp1)
		{
			printf(" stack_a :%d\n", tmp1->value);
			tmp1 = tmp1->next;
		}
		
		printf("\n");
		
		// ft_begin_sort(&a, &b);
		// ft_end_sort(&a, &b);
		
		// while (b)
		// {
		// 	printf("stack_b :%d\n", b->value);
		// 	b = b->next;
		// }
		// printf("\n");
		ft_sort_three(&a);
		while(a)
		{
			printf("after we sort :%d\n", a->value);
			a = a->next;
		}
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