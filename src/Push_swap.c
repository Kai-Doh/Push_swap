/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:52:38 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 04:46:22 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static t_list	*init(char **ag, int ac);
static int			check_stack(t_list *lst, int n, char *nbr);

int	main(int ac, char **ag)
{
	t_stacks	*table;
	char		**args;

	if (ac == 1)
		return (0);
	table = malloc(sizeof(t_stacks));
	if (!table)
		return (MALLOC_FAIL);
	if (ac == 2)
		args = ft_split(ag[1], ' ');
	else
		args = ag;
	table->stack_a = init(args, ac);
	if (table->stack_a == NULL)
		return (INIT_FAIL);
	table->stack_b = NULL;
	table->size_a = ft_lstsize(table->stack_a);
	table->size_b = ft_lstsize(table->stack_b);
	indexing(table->stack_a);
	dispatcher(table);
}

static t_list	*init(char **ag, int ac)
{
	t_list	*tmp;
	t_list	*result;
	int			i;
	long		nb;

	if (ac == 2)
		i = 0;
	else
		i = 1;
	result = NULL;
	while (ag[i])
	{
		nb = ft_atoi(ag[i]);
		if (nb < INT_MIN || nb > INT_MAX || check_stack(result, nb, ag[i]) == 0)
		{
			ft_putendl_fd("Error\n", 2);
			return (NULL);
		}
		tmp = ft_lstnew(nb);
		ft_lstadd_back(&result, tmp);
		tmp->index = -1;
		i++;
	}
	return (result);
}

static int	check_stack(t_list *lst, int n, char *nbr)
{
	t_list	*tmp;
	int			i;

	tmp = lst;
	i = 0;
	while (nbr[i])
	{
		if (!(((nbr[i] == '-' || nbr[i] == '+') && ft_isdigit(nbr[i + 1])
					&& (i == 0 || !ft_isdigit(nbr[i - 1])))
				|| ft_isdigit(nbr[i])))
			return (FALSE);
		i++;
	}
	while (tmp)
	{
		if (tmp->number == n)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
