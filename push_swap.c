/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:13:01 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/30 11:05:54 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_stacks(int argc, char **argv, t_list **stack_a)
{
	t_list	*new_stack;
	char	**input;
	int		i;

	i = 0;
	if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		input = argv;
	}
	while (input[i])
	{
		new_stack = ft_lstnew(ft_atoi(input[i++]));
		ft_lstadd_back(stack_a, new_stack);
	}
	indexing_stack(stack_a);
	if (argc == 2)
		free(input);
}

void free_stack(t_list **stack)
{
	t_list *tmp;
	t_list *first;

	first = *stack;
	if (first->previous != NULL)
		first->previous->next = NULL;
	while (first)
	{
		tmp = first;
		first = first->next;
		free(tmp);
	}
	free(stack);
}

void print_list(t_list *stack_a) {
    t_list *current = stack_a;
	int i = 0;
    while (i++ < 5) {
        printf("%d\n", current->content);
        current = current->next;
    }
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	check_args(argc, argv);
	stack_a = malloc(sizeof(t_list));
	*stack_a = NULL;
	stack_b = malloc(sizeof(t_list));
	init_stacks(argc, argv, stack_a);
	print_list(*stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
}
