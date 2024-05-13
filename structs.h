/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:42:05 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/09 17:27:58 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_var{
    char    **matrix;
    int n;
}t_var;

typedef struct s_list{
    int value;
    struct s_list   *next;
}t_list;






















#endif