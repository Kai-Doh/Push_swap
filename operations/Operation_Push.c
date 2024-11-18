/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operation_Push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:36:55 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:00:26 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_list;

	if (!*stack_b)
		return ;
	tmp_list = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp_list;
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_list;

	if (!*stack_b)
		return ;
	tmp_list = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp_list;
	ft_putendl_fd("pb", 1);
}
