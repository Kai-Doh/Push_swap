/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:06:19 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 05:39:38 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define TRUE 1
# define FALSE 0
# define INIT_FAIL 2
# define MALLOC_FAIL 1
# define NO_ARG 3
# define NO_ERROR 0
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_ps_data
{
	int	min;
	int	max;
	int	middle;
	int	flag;
}	t_ps_metadata;

typedef struct s_stacks
{
	t_list		*stack_a;
	t_list		*stack_b;
	int			size_a;
	int			size_b;
}	t_stacks;

void		indexing(t_list *stack_a);
void		dispatcher(t_stacks	*stk);
int			check_sort(t_list **stack);
void		three_sort(t_stacks *table);
void		five_sort(t_stacks	*table);
int			check_reverse_sort(t_stacks *table);
t_list		*search_min(t_list **stack);
t_list		*search_max(t_list **stack);
int			check_stack_a(t_list **stack_a, int size_a);
void		quick_sort_init(t_list **stack_a, t_list **stack_b, int size_a);
void		free_args(char **args);
void		free_table(t_stacks *table);

void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list **stack_a, t_list **stack_b);
void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);

#endif
