/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/28 19:59:09 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sort(t_list *list)
{
  t_list *tmp = list;
  t_list *tmp2 = list->next;

  while (tmp2)
  {
    if (tmp->value > tmp2->value)
      return (0);
    tmp = tmp2;
    tmp2 = tmp2->next;
  }
  return (1);
}


int	main(int ac, char **av)
{
	int		i;
	t_var	var;
	t_list	*a;
	t_list	*b;

	i = 0;
	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		if (ft_strcmp(av[1], " ") == 0)
			print_error();
		check_ifall_isnumber(av);
		var.matrix = read_numbers(ac, av);
		if (check_dig(var.matrix) == 0)
				print_error();
		parsing_func(var.matrix);
		while (var.matrix[i])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(var.matrix[i++])));
		}
		if (check_sort(a) == 1)
			exit(0);
		ft_begin_sort(&a, &b);
		ft_end_sort(&a, &b);
		// while(b)
		// {
		// 	printf("after we sort :%d\n", b->value);
		// 	b = b->next;
		// }
		return (0);
	}
	return (1);
}