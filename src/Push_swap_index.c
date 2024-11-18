/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 02:12:40 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 05:06:58 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static int	smallest_number(t_list *stack_a);
static void	indexing_change(t_list *stack_a, int min, int i);

void	indexing(t_list *stack_a)
{
	int	length;
	int	min;
	int	i;

	i = 0;
	length = ft_lstsize(stack_a);
	while (i < length)
	{
		min = smallest_number(stack_a);
		indexing_change(stack_a, min, i);
		i++;
	}
}

static int	smallest_number(t_list *stack_a)
{
	t_list		*tmp;
	long int	min;

	min = LONG_MAX;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == -1 && tmp->number < min)
			min = tmp->number;
		tmp = tmp->next;
	}
	return (min);
}

static void	indexing_change(t_list *stack_a, int min, int i)
{
	t_list	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == -1 && tmp->number == min)
			break ;
		tmp = tmp->next;
	}
	tmp->index = i;
}
