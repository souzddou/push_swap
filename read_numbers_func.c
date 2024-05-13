/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:44:57 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/10 18:55:27 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    **read_numbers(int ac, char **av)
{
    int i;
    char    *s;
    char    **strs;
    
    if (ac < 2)
        exit(1);
    i = 1;
    s = ft_strdup("");
    while(i < ac)
    {
        // if (ft_strcmp(av[i], " "))
		// 	ft_check(av[i], s);
        s = ft_strjoin(s, av[i]);
        s = ft_strjoin(s, " ");
        i++;
    }
    strs = ft_split(s, ' ');
    free(s);
    return(strs);
}