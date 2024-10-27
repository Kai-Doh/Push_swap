/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:02:28 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/27 22:27:58 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*first;
	t_list	*next;
	int		tmp_content;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (ERROR);
	first = *stack;
	next = first->next;
	tmp_content = head->content;
	tmp_index = head->index;
	first->content = next->content;
	first->index = next->index;
	next->content = tmp_content;
	next->index = tmp_index;
	return (SUCCESS);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == ERROR)
		return (ERROR);
	ft_putendl_fd("sa", 1);
	return (SUCCESS);
}

int sb(t_list **stack_b)
{
	if (swap(stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("sb", 1);
	return (SUCCESS);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == ERROR || swap(stack_b) == ERROR)
		return (ERROR);
	ft_putendl_fd("ss", 1);
	return (SUCCESS);
}
