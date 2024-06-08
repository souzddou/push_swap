/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:40:34 by souzddou          #+#    #+#             */
/*   Updated: 2024/06/08 18:04:48 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(t_list *list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = list;
	tmp2 = list->next;
	while (tmp2)
	{
		if (tmp->value > tmp2->value)
			return (0);
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
	return (1);
}

void	check_spaces(char **av)
{
	char	**split;

	split = NULL;
	split = ft_split(av[1], ' ');
	if (!split[0])
	{
		free_strr(split);
		print_error();
	}
}

void	check_parsing(char **av, int ac, t_list **a)
{
	t_var	var;
	int		i;
	int		j;

	parsing_func(ac, av);
	check_spaces(av);
	j = 0;
	while (av[j])
	{
		if (ft_strlen(av[j]) == 0)
			exit(1);
		j++;
	}
	var.matrix = read_numbers(ac, av);
	check_double(ac, var.matrix);
	i = 0;
	while (var.matrix[i])
		ft_lstadd_back(a, ft_lstnew(ft_atoi(var.matrix[i++])));
	free_strr(var.matrix);
}

void	begin_sort(t_list **a, t_list **b)
{
	int	len;
	int	*arr;

	len = size_of_stack(a);
	arr = create_array(a);
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
			ft_first_sort(a, b, arr, len);
			ft_second_sort(a, b);
		}
	}
	free(arr);
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
		free_stack(a);
		return (0);
	}
	return (1);
}
