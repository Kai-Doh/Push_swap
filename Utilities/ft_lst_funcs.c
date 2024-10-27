/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:18:57 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/27 21:48:27 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*last;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		new->next = *lst;
		(*lst)->previous = new;
		last->next = new;
		new->previous = last;
	}
	else
	{
		new->next = new;
		new->previous = new;
	}
	*lst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	if (lst)
	{
		current = lst;
		while (current->next != lst)
			current = current->next;
		return (current);
	}
	return (NULL);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->previous = last;
		new->next = *lst;
		(*lst)->previous = new;
	}
	else
	{
		*lst = new;
		new->next = new;
		new->previous = new;
	}
}

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current;

	size = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current)
	{
		size++;
		current = current->next;
		if (current == lst)
			break ;
	}
	return (size);
}

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->index = -1;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}
