/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agtshiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:40:33 by agtshiba          #+#    #+#             */
/*   Updated: 2024/06/11 11:43:23 by agtshiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(t_stack_node **head)
{
	t_stack_node	*last;

	if (!*head || !(*head)->next)
		return ;
	last = find_last_node(head);
	last->prev->next = NULL;
	last->next = *head;
	last->prev = NULL;
	*head = last;
	last->next->prev = last;
}

void	rra(t_stack_node **a)
{
	rev_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	rev_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("rrr\n");
}
