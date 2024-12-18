/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:03:25 by ktiomico          #+#    #+#             */
/*   Updated: 2024/11/18 03:11:07 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long int content)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
	node->number = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	printf("%s\n", node->content);
}
*/
