/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/06/02 15:25:35 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int check_sort(t_list *list)
{
  t_list *tmp = list;
  t_list *tmp2 = list->next;

  while (tmp2)
  {
    if (tmp && tmp2 && tmp->value && tmp2->value && tmp->value > tmp2->value)
	{
      return (0);
	}
    tmp = tmp2;
    tmp2 = tmp2->next;
  }
  return (1);
}

void check_parsing(char **av, int ac, t_list **a)
{
	t_var var;
	int i;
	t_data_with_list data_array[ac];

	if (ft_strcmp(av[1], " ") == 0)
			print_error();

		parsing_func(ac, av);
		var.matrix = read_numbers(ac, av);

		i = 0;
		while (var.matrix[i])
		{
			data_array[i].data = ft_atoi(var.matrix[i]);
			data_array[i].list = ft_lstnew(data_array[i].data);
			ft_lstadd_back(a, data_array[i].list);
			// printf("%p\n", data_array[i].list);
			i++;
		}
		free_strr(var.matrix);
}

void	begin_sort(t_list **a, t_list **b)
{
	if (!check_sort(*a))
		{
			if (size_of_stack(a) <= 3)
				ft_sort_three(a);
			else if (size_of_stack(a) == 4)
				ft_sort_four(a, b);
			else if (size_of_stack(a) == 5)
				ft_sort_five(a, b);
			else if (size_of_stack(a) > 5)
			{
				ft_first_sort(a, b);
				ft_second_sort(a, b);
			}
		}
}


int	main(int ac, char **av)
{
	int		i;
	t_list	*a;
	t_list	*b;

	i = 0;
	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		check_parsing(av, ac, &a);
		begin_sort(&a, &b);
		print_stack(&a);
		free_stack(a);
		return (0);
	}

	return (1);
}