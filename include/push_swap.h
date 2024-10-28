/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:03:24 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/28 14:34:19 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define TRUE 1
# define FALSE 0
# define ERROR -1
# define SUCCESS 0
# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*previous;
	struct s_list	*next;
}	t_list;

void	ft_bzero(void *s, size_t num);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

void	check_args(int argc, char **argv);
void	error_msg(char *msg);
void	indexing_stack(t_list **stack);
void	free_table(char **input);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int	 	ra(t_list **stack_a);
int	 	rb(t_list **stack_b);
int	 	rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

#endif
