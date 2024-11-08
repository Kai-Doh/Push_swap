/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:25:10 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/06 11:28:56 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	go_to_min(t_list **stack, int value)
{
	int		min;
	t_list	*current;

	current = *stack;
	min = current->index;
	while (current->next)
	{
		current = current->next;
		if ((current->index < min) && (current->index != value))
			min = current->index;
	}
	return (min);
}

static void	three_sort(t_list **stack_a)
{
	t_list	*current;
	int		min;
	int		min_after;

	current = *stack_a;
	min = go_to_min(stack_a, -1);
	min_after = go_to_min(stack_a, min);
	if (check_sort(*stack_a))
		return ;
	if (current->index == min && current->next->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
}

void	sort_small(t_list **stack_a, t_list **stack_b)
{
	int		size;

	if (check_sort(*stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1))
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		three_sort(stack_a);
	else if (size == 4)
		four_sort(stack_a, stack_b);
	else if (size == 5)
		five_sort(stack_a, stack_b);
}
