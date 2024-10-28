/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:40:48 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 15:29:11 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_min(t_list **stack)
{
	t_list	*first;
	t_list	*tmp;
	t_list	*min;
	int		min_switch;

	min = (*stack)->next;
	first = *stack;
	tmp = *stack;
	min_switch = FALSE;
	while (tmp)
	{
		if (tmp->index == -1 && (tmp->content < min->content || !min_switch))
		{
			min = tmp;
			min_switch = TRUE;
		}
		tmp = tmp->next;
		if (tmp == first)
			break ;
	}
	return (min);
}

void	indexing_stack(t_list **stack)
{
	t_list	*tmp;
	int		index;

	index = 0;
	tmp = find_min(stack);
	while (tmp && tmp->index == -1)
	{
		tmp->index = index++;
		tmp = find_min(stack);
	}
}
