/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:01:59 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 13:39:46 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	if (!stack)
		return ;
	if (*stack && (*stack)->next)
	{
		head = *stack;
		tmp = head->next;
		head->next = tmp->next;
		tmp->next = head;
		*stack = tmp;
		ft_print("sa\n");
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_a || !stack_b)
		return ;
	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		ft_print("pa\n");
	}
}

void	ra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack)
		return ;
	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_print("ra\n");
	}
}

void	rra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack)
		return ;
	if (*stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
		{
			tmp = last;
			last = last->next;
		}
		tmp->next = NULL;
		last->next = *stack;
		*stack = last;
		ft_print("rra\n");
	}
}
