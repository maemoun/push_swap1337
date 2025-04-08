/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:21:23 by maeskhai          #+#    #+#             */
/*   Updated: 2025/04/07 15:01:09 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = nbr;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

t_list	*ft_lstlast(t_list *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_lstadd_back(t_list **stack, t_list *new_node)
{
	t_list	*tmp;

	if (!stack || !new_node)
		return ;
	if (!*stack)
	{
		*stack = new_node;
	}
	else
	{
		tmp = ft_lstlast(*stack);
		tmp->next = new_node;
	}
}
