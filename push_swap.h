/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:43:10 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/11 17:11:00 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"structs.h"

int	ft_atoi(const char *str);
void    parsing_func(char **matrix);
void	check_ifall_isnumber(char	**matrix);
int	ft_strcmp(char *s1, char *s2);
char    **read_numbers(int ac, char **av);
void	print_error();
char	*ft_strjoin(char *line, char *buff);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
int	ft_strchr(const char *s, int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int value);
#endif