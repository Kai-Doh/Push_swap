/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:25:37 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 16:09:13 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dupl(int tmp, char **input, int index)
{
	index++;
	while (input[index])
	{
		if (ft_atoi(input[index]) == tmp)
			return (TRUE);
		index++;
	}
	return (FALSE);
}

void	error_msg(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit (1);
}

static int	ft_isnum(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '-')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	valid_input(char **input, int argc, int i)
{
	long	tmp;

	while (input[i])
	{
		if (input[i] == NULL)
			printf("it is NULL");
		tmp = ft_atoi(input[i]);
		if (!ft_isnum(input[i]) || check_dupl(tmp, input, i)
			|| (tmp < INT_MIN || tmp > INT_MAX))
		{
			free(input);
			error_msg("Error");
		}
		i++;
	}
	if (argc == 2)
		free_table(input);
}
// declare long to check if there are inputs that are bigger then int.

void	check_args(int argc, char **argv)
{
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
	valid_input(input, argc, i);
}
