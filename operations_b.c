/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:23:25 by maeskhai          #+#    #+#             */
/*   Updated: 2025/04/05 10:23:28 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sb(t_list **stack)
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
		ft_print("sb\n");
	}
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (!stack_b || !stack_a)
		return ;
	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		ft_print("pb\n");
	}
}

void	rb(t_list **stack)
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
		ft_print("rb\n");
	}
}

void	rrb(t_list **stack)
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
		ft_print("rrb\n");
	}
}
