/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_3_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:46:12 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:18:13 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	three_sort(t_stacks *table)
{
	t_list	*last;

	if (check_sort(&table->stack_a))
		return ;
	last = ft_lstlast(table->stack_a);
	if (check_reverse_sort(table))
	{
		sa(&table->stack_a);
		rra(&table->stack_a);
	}
	else if (table->stack_a->number < last->number
		&& table->stack_a->next->number < last->number)
		sa(&table->stack_a);
	else if (table->stack_a->number > last->number
		&& table->stack_a->next->number < last->number)
		ra(&table->stack_a);
	else if (table->stack_a->number < last->number
		&& table->stack_a->next->number > last->number)
	{
		sa(&table->stack_a);
		ra(&table->stack_a);
	}
	else if (table->stack_a->number > last->number
		&& table->stack_a->next->number > last->number)
		rra(&table->stack_a);
}

void	five_sort(t_stacks	*table)
{
	int	length;

	length = ft_lstsize(table->stack_a);
	while (length--)
	{
		if (table->stack_a->index == 0 || table->stack_a->index == 1)
			pb(&table->stack_a, &table->stack_b);
		else
			ra(&table->stack_a);
	}
	three_sort(table);
	pa(&table->stack_a, &table->stack_b);
	pa(&table->stack_a, &table->stack_b);
	if (table->stack_a->number > table->stack_a->next->number)
		sa(&table->stack_a);
}
