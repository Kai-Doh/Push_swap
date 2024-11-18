/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_quick_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:46:28 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:22:34 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	sort_a(t_list **stack_a, t_list **stack_b,
				t_ps_metadata *data);
static void	sort_b(t_list **stack_a, t_list **stack_b,
				t_ps_metadata *data);
static void	next_min(t_list **stack_a, t_list **stack_b,
				t_ps_metadata *data);
static void	quick_start(t_list **stack_a, t_list **stack_b,
				t_ps_metadata *data, int size_a);

void	quick_sort_init(t_list **stack_a, t_list **stack_b, int size_a)
{
	t_ps_metadata	data;

	data.min = search_min(stack_a)->index;
	data.max = search_max(stack_a)->index;
	data.middle = data.max / 2 + data.min;
	data.flag = 0;
	quick_start(stack_a, stack_b, &data, size_a);
	while (!(check_stack_a(stack_a, size_a)))
	{
		if (ft_lstsize(*stack_b) == 0)
			sort_b(stack_a, stack_b, &data);
		else
			sort_a(stack_a, stack_b, &data);
	}
}

static void	sort_a(t_list **stack_a, t_list **stack_b,
	t_ps_metadata *data)
{
	int	size_b;
	int	i;

	i = -1;
	size_b = ft_lstsize(*stack_b);
	while (ft_lstsize(*stack_b) && ++i < size_b)
	{
		if ((*stack_b)->index == data->min)
			next_min(stack_a, stack_b, data);
		else if ((*stack_b)->index >= data->middle)
		{
			(*stack_b)->process = data->flag;
			pa(stack_a, stack_b);
		}
		else if ((*stack_b)->index < data->middle)
			rb(stack_b);
	}
	data->max = data->middle;
	data->middle = (data->max - data->min) / 2 + data->min;
	data->flag++;
}

static void	sort_b(t_list **stack_a, t_list **stack_b,
	t_ps_metadata *data)
{
	int	tmp_flag;

	tmp_flag = (*stack_a)->process;
	if ((*stack_a)->process != 0)
	{
		while ((*stack_a)->process == tmp_flag)
		{
			if ((*stack_a)->index != data->min)
				pb(stack_a, stack_b);
			next_min(stack_a, stack_b, data);
		}
	}
	else if ((*stack_a)->process == 0)
	{
		while ((*stack_a)->process != -1)
		{
			if ((*stack_a)->index != data->min)
				pb(stack_a, stack_b);
			next_min(stack_a, stack_b, data);
		}
	}
	if (ft_lstsize(*stack_b))
		data->max = (search_max(stack_b))->index;
	data->middle = (data->max - data->min) / 2 + data-> min;
}

static void	next_min(t_list **stack_a, t_list **stack_b,
	t_ps_metadata *data)
{
	if (ft_lstsize(*stack_b) > 0 && ((*stack_b)->index == data->min))
		pa(stack_a, stack_b);
	else if ((*stack_a)->index == data->min)
	{
		(*stack_a)->process = -1;
		ra(stack_a);
		data->min++;
	}
	else if ((ft_lstsize(*stack_b)) > 2
		&& ft_lstlast(*stack_b)->index == data->min)
		rrb(stack_b);
	else if ((*stack_a)->next->index == data->min)
		sa(stack_a);
	else if ((ft_lstsize(*stack_a)) > 1
		&& ((*stack_a)->next->index == data->min)
		&& ((*stack_b)->next->index == data->min + 1))
		ss(stack_a, stack_b);
	else
		return ;
	next_min(stack_a, stack_b, data);
}

static void	quick_start(t_list **stack_a, t_list **stack_b,
	t_ps_metadata *data, int size_a)
{
	int	i;

	i = -1;
	while (i++ < size_a)
	{
		if ((*stack_a)->index <= data->middle)
			pb(stack_a, stack_b);
		else
		{
			if (ft_lstsize(*stack_b) > 1
				&& (*stack_b)->index < data->middle / 2)
				rr(stack_a, stack_b);
			else
				ra(stack_a);
		}
	}
	data->max = data->middle;
	data->middle = (data->max - data->min) / 2 + data->min;
	data->flag++;
}
