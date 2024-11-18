/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:34:46 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:15:20 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	check_sort(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

int	check_reverse_sort(t_stacks *table)
{
	t_list	*tmp;

	tmp = table->stack_a;
	while (tmp->next)
	{
		if (tmp->number < tmp->next->number)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

t_list	*search_min(t_list **stack)
{
	t_list	*min;
	t_list	*tmp;

	min = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->number < min->number)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_list	*search_max(t_list **stack)
{
	t_list	*max;
	t_list	*tmp;

	max = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->number > max->number)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

int	check_stack_a(t_list **stack_a, int size_a)
{
	int	length;

	length = ft_lstsize(*stack_a);
	if (length != size_a)
		return (FALSE);
	if (check_sort(stack_a) == 0)
		return (FALSE);
	return (TRUE);
}
