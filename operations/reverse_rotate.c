/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:59:45 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 14:07:54 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int reverse_rotate(t_list stack)
{
	if (!stack || !stack->next)
		return (ERROR);
	*stack = (*stack)->previous;
	return (SUCCESS);
}

int rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a) == ERROR)
		return (ERROR);
	ft_putendl_fd("rra", 1);
	return (SUCCESS);
}

int rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("ra", 1);
	return (SUCCESS);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
	if (reverse_rotate(stack_a) == ERROR || reverse_rotate(stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("rrr", 1);
	return (SUCCESS);
}
