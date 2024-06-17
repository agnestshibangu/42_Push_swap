/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agtshiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:51:19 by agtshiba          #+#    #+#             */
/*   Updated: 2024/06/13 17:26:12 by agtshiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack_node **head)
{
	t_stack_node	*first_node;
	t_stack_node	*next;
	int		tmp_index;
	int	tmp_nbr;

	first_node = *head;
	next = first_node->next;
	if (list_size(head) < 2)
		return ;
	if (!head || !next)
		return ;
	tmp_index = first_node->index;
	tmp_nbr = first_node->nbr;
	first_node->index = next->index;
	first_node->nbr = next->nbr;
	next->index = tmp_index;
	next->nbr = tmp_nbr;
}

void	sa(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
