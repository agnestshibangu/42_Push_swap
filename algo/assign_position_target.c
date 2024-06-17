/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_position_target.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agtshiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:36:13 by agtshiba          #+#    #+#             */
/*   Updated: 2024/06/13 15:47:57 by agtshiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	assign_target_node(t_stack_node **a, t_stack_node **b)
{	
	t_stack_node	*current_in_a;
	t_stack_node	*current_in_b;
	t_stack_node	*target_node;
	long		best_match;

	current_in_a = *a;
	current_in_b = *b;
	target_node = NULL;
	while (current_in_b)
	{
		best_match = LONG_MAX;
		current_in_a = *a;
		while (current_in_a)
		{
			if (current_in_a->nbr > current_in_b->nbr 
				&& current_in_a->nbr < best_match)
			{
				best_match = current_in_a->nbr;
				target_node = current_in_a;
			}
			current_in_a = current_in_a->next;
		}
		if (LONG_MAX == best_match)
			current_in_b->target_node = find_min(a);
		else
			current_in_b->target_node = target_node;
		current_in_b = current_in_b->next;
	}
}

void	set_current_position(t_stack_node **head)
{
	t_stack_node	*current;
	int	i;
	int	median;

	current = *head;
	i = 0;
	median = list_size(head) / 2;
	while (current)
	{
		current->position = i;
		if (i <= median)
			current->above_median = true;
		else
			current->above_median = false;
		current = current->next;
		i++;
	}
}

void	define_nodes_position_a_b(t_stack_node **a, t_stack_node **b)
{
	set_current_position(a);
	set_current_position(b);
}
