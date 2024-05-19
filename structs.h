/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:42:05 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/15 19:36:13 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_var{
    char    **matrix;
    int n;
    char *s;
}t_var;

typedef struct s_list{
    int value;
    struct s_list   *next;
    int index;
    int rank;
}t_list;






















#endif