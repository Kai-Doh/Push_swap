/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:18:17 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 14:09:04 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push(t_list **push_from, t_list **push_to)
{
	t_list	*tmp;
	t_list	*last_from;
	t_list	*last_to;

	if (!*push_from)
		return (ERROR);
	tmp = *push_from;
	if ((*push_from)->next == *push_from)
		*push_from = NULL;
	else
	{
		last_from = (*push_from)->previous;
		*push_from = (*push_from)->next;
		(*push_from)->previous = last_from;
		last_from->next = *push_from;
	}
	ft_lstadd_front(push_to, tmp);
	return (SUCCESS);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == ERROR)
		return (ERROR);
	ft_putendl_fd("pa", 1);
	return (SUCCESS);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("pb", 1);
	return (SUCCESS);
}
