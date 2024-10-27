/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:40:48 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/27 18:09:22 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_min(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;
	int		min_switch;

	tmp = *stack;
	min_switch = FALSE;
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	indexing_stack(t_list **stack)
{
	t_list	*tmp;
	int		index;

	index = 0;
	tmp = find_min(stack);
	while (tmp)
	{
		tmp->index = index++;
		tmp = find_min(stack);
	}
}
