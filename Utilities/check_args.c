/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:25:37 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/26 23:46:14 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_dupl(int tmp, char **input, int index)
{
	while (argv[++i])
	{
		if (ft_atoi(argv[i] == tmp))
			return (1);
		i++;
	}
	return (0);
}

static void	error_msg(void)
{
	ft_putendl_fd("Error", 1);
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

void	valid_input(char **input)
{
	long	tmp;
	int		i;

	while (input[i])
	{
		tmp = ft_atoi(input[i]);
		if (!ft_isnum(input[i]))
			error_msg();
		if (check_dupl(tmp, argv, i))
			error_msg();
		if (tmp < -2147483648 || tmp > 21474833647)
			error_msg();
		i++;
	}
	if (argc == 2)
		free_table(input);
	

}
// declare long to check if there are inputs that are bigger then int.

void	check_args(int argc, char **argv)
{
	char	**input;

	if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		input = argv;
	}
	if (!valid_input(input))

}
