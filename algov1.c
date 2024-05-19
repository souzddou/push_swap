/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algov1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:11:46 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/18 10:31:38 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    *create_array(t_list **a)
{
    int i;
    // t_var var;
    int *s;
    
    i = 0;
	t_list *tmp = *a;
    s = malloc(sizeof(int) * size_of_stack(a));
	while(tmp)
	{
		s[i] = tmp->value;
		// printf("%d\n", s[i]);
		tmp = tmp->next;
		i++;
	}
    return(s);
}

// void	init_index(t_list **a)
// {
// 	int		len;
// 	t_list	*tmp;
// 	int		i;

// 	len = size_of_stack(a);
// 	i = 0;
//     int *arr = create_array(a);
//     int *s = sort_arr(arr, len);
//     printf("--------------------------\n");
//     while(i < len)
//     {
//         printf("array :%d\n", s[i]);
//         i++;
//     }
// 	tmp = *a;
//     i = 0;
//     printf("--------------------------\n");
// 	while (i < len)
// 	{
// 		tmp->index = get_index_arr(s, len, tmp->value);
//         printf("index_array :%d\n", tmp->index);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }

void	ft_sort(t_list **a, t_list **b)
{
	// // t_list *tmp;
    int		len;
    int index;
	// // t_list	*tmp;
	// int		i;

	len = size_of_stack(a);
	// i = 0;
    int *arr = create_array(a);
    int *s = sort_arr(arr, len);
	(void)s;
    (void)b;
    // init_index(a);
	int size = 0;
	// tmp = *a;
    printf("--------------------------\n");
	while ((*a)->next != NULL)
	{
		index = get_index_arr(s, len, (*a)->value);
        printf("index_problem: %d\n", (*a)->value);
		if (index <= size)
		{
			ft_pa(b, a, 'b'); // push to b
			ft_rb(b, 'b');
			size++;
		}
		else if (index <= size + 4)
		{
			ft_pa(b, a, 'b');  // push to b
			size++;
		}
		else
        {
            ft_ra(a, 'a');
        }
		(*a) = (*a)->next;
	}
	
// 	(void)b;
// 	while((*a)->next != NULL)
// 	{
// 		// printf("addr :%d ==> %p\n", (*a)->value, (*a)->next);	
// 		index = get_index_arr(s, len, (*a)->value);
// 		printf("%d ==> %d\n", (*a)->value, index);
// 		if (index < size)
// 		{
// 			ft_pa(b, a, 'b'); // push to b
// 			ft_rb(b, 'b');
// 			size++;
// 		}
// 		else if (index <= size + 4)
// 		{
// 			ft_pa(b, a, 'b');  // push to b
// 			size++;
// 		}
// 		else
//      	{
//         	ft_ra(a, 'a');
//       	}
// 		(*a) = (*a)->next;
// 	}
}