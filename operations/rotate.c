/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:35:02 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 14:07:37 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_list **stack)
{
	if (!*stack || !(*stack)->next)
		return (ERROR);
	*stack = (*stack)->next;
	return (SUCCESS);
}

int ra(t_list **stack_a)
{
	if (rotate(stack_a) == ERROR)
		return (ERROR);
	ft_putendl_fd("ra", 1);
	return (SUCCESS);
}

int rb(t_list **stack_b)
{
	if (rotate(stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("rb", 1);
	return (SUCCESS);
}
