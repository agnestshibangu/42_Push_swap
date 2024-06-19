/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agtshiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:23:17 by agtshiba          #+#    #+#             */
/*   Updated: 2024/06/18 10:30:32 by agtshiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	exit_error(t_lst **head)
{
	ft_printf("error : the list is being freeded");
	free_list(head);
	return (0);
}

int	check_valid_caracters(t_lst **head)
{
	t_lst	*current_in_head;

	current_in_head = *head;
	while (current_in_head)
	{
		if (current_in_head->nbr >= INT_MAX
			|| current_in_head->nbr <= INT_MIN)
		{
			ft_printf("Error\n");
			return (0);
		}
		current_in_head = current_in_head->next;
	}
	return (1);
}

int	check_syntax(char *str_nbr)
{
	if (!(*str_nbr == '+' || *str_nbr == '-'
			|| (*str_nbr >= '0' && *str_nbr <= '9')))
		return (1);
	if ((*str_nbr == '+' || *str_nbr == '-')
		&& !(str_nbr[1] >= '0' && str_nbr[1] <= '9'))
		return (1);
	while (*++str_nbr)
	{
		if (!(*str_nbr >= '0' && *str_nbr <= '9'))
			return (1);
	}
	return (0);
}

int	check_doubles(t_lst **head)
{
	t_lst	*current_in_head;
	t_lst	*compared_node;

	current_in_head = *head;
	while (current_in_head)
	{
		compared_node = current_in_head->next;
		while (compared_node)
		{
			if (current_in_head->nbr == compared_node->nbr)
			{
				ft_printf("Error\n");
				return (0);
			}
			compared_node = compared_node->next;
		}
		current_in_head = current_in_head->next;
	}
	return (1);
}
