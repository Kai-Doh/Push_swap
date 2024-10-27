/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:03:24 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/27 22:14:11 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#IFNDEF PUSH_SWAP_H
#DEFINE PUSH_SWAP_H
#DEFINE TRUE 1
#DEFINE FALSE 0
#DEFINE ERROR -1
#DEFINE SUCCESS 0
#DEFINE INT_MIN -2147483648
#DEFINE INT_MAX 2147483647

#INCLUDE <STDLIB.H>
#INCLUDE <STDIO.H>
#INCLUDE <STRING.H>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*previous;
	struct s_list	*next;
}	t_list;

void	check_args(int argc, char **argv);
void	error_msg(char *msg);
void	indexing_stack(t_list **stack);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

#ENDIF
