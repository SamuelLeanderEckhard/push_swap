/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:20:31 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/31 23:51:45 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

// Defines target node from 'b' to 'a'
static void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target_node;
	long	max_node;

	while (b)
	{
		max_node = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr > b->nbr
				&& current_a->nbr < max_node)
			{
				max_node = current_a->nbr;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (max_node == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

// Ready to push back to 'a' stack
void	init_nodes_b(t_stack *a, t_stack *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
