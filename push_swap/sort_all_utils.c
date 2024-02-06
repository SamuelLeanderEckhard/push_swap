/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:56:39 by seckhard          #+#    #+#             */
/*   Updated: 2024/02/04 20:28:26 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

/* Rotates both stack's top nodes to bottom until the
	cheapest nodes/target nodes are on top*/
static void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

/*Rotates both stack's bottom nodes to top until the
	cheapeast nodes/target nodes are on top*/
static void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}

// Moves cheapest/target nodes on top of the stack and pushes to b
void	push_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->above_median
		&& cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		rev_rotate_both(a, b, cheapest_node);
	push_init(a, cheapest_node, 'a');
	push_init(b, cheapest_node->target_node, 'b');
	pb(b, a);
}

void	push_b_to_a(t_stack **a, t_stack **b)
{
	push_init(a, (*b)->target_node, 'a');
	pa(a, b);
}

// Moves lowest number on top
void	min_to_top(t_stack **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}
