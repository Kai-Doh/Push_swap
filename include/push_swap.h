/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:03:24 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/27 15:17:21 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#IFNDEF PUSH_SWAP_H
#DEFINE PUSH_SWAP_H
#DEFINE TRUE 1
#DEFINE FALSE 0
#DEFINE ERROR -1
#DEFINE INT_MIN -2147483648
#DEFINE INT_MAX 2147483647

#INCLUDE <STDLIB.H>
#INCLUDE <STDIO.H>
#INCLUDE <STRING.H>

typedef struct s_list
{
	void			*content;
	int				index;
	struct s_list	*previous;
	struct s_list	*next;
}	t_list;

#ENDIF
