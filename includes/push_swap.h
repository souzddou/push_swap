/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:43:10 by souzddou          #+#    #+#             */
/*   Updated: 2024/06/02 15:25:58 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"structs.h"

int	ft_atoi(const char *str);
void    parsing_func(int ac ,char **av);
int	ft_strcmp(char *s1, char *s2);
char    **read_numbers(int ac, char **av);
void	print_error();
char	*ft_strjoin(char *line, char *buff);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
int	ft_strchr(const char *s, int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *lst);
void    ft_sort_two(t_list  *a);
void    ft_sort_three(t_list    **a);
void    ft_sort_four(t_list    **a, t_list **b);
void    ft_sort_five(t_list    **a, t_list **b);
int	get_index_arr(int	*arr, int len, int nb);
int	get_index_stack(t_list	*a, int nb);
void    ft_rra(t_list **list, char c);
void    ft_rrb(t_list **list, char c);
void    ft_ra(t_list **list, char c);
void    ft_rb(t_list **list, char c);
void    ft_sa(t_list **list, char c);
void    ft_sb(t_list **list, char c);
void    ft_pa(t_list **a, t_list **b, char c);
void    ft_rrr(t_list **a, t_list **b, char c);
int size_of_stack(t_list **list);
int    get_range(int size);
void    ft_first_sort(t_list **a, t_list **b);
t_list	*ft_find_max(t_list *b);
t_list *ft_find_min(t_list *a);
void	*sort_arr(int *tab, int size);
void    ft_second_sort(t_list **a, t_list **b);
void    *create_array(t_list **a);
int ft_position(t_list *b, int v);
void	check_dig(int ac, char **av);
void    print_stack(t_list **a);
size_t	ft_strlen(char *s);
int	ft_printf(const char*s, ...);
void	free_stack(t_list *head);

#endif