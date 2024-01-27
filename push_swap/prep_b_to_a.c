/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:20:31 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/27 21:52:25 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MIN;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr < b->nbr
				&& current_a->nbr > best_match_index)
			{
				best_match_index = current_a->nbr;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MIN)
			b->target_node = find_max(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_nodes_b(t_stack *a, t_stack *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}