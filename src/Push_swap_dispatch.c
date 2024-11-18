/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_dispatch.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:24:48 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:15:37 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	dispatcher(t_stacks	*stk)
{
	int	length;

	length = ft_lstsize(stk->stack_a);
	if (check_sort(&stk->stack_a))
		return ;
	if (length == 2)
	{
		if (stk->stack_a->number > stk->stack_a->next->number)
			sa(&stk->stack_a);
	}
	else if (length == 3)
		three_sort(stk);
	else if (length == 5)
		five_sort(stk);
	else
		quick_sort_init(&stk->stack_a, &stk->stack_b, ft_lstsize(stk->stack_a));
}
