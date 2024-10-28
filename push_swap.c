/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:13:01 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 14:12:38 by ktiomico         ###   ########.fr       */
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
		new_stack = ft_lstnew(ft_atoi(input[i++]))
		ft_lstadd_back(stack_a, new_stack);
	}
	indexing_stack(stack_a);
	if (argc == 2)
		free(input)
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	check_args(arg c, argv);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	init_stacks(argc, argv, stack_a);
}
