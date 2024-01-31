/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:30:52 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/31 22:30:25 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

// Sorts stack 'a' if it has more than 3 nodes
void	sort_all(t_stack **a, t_stack **b)
{
	int	a_len;

	a_len = stack_len(*a);
	if (a_len-- > 3 && !stack_sorted(*a))
		pb(b, a);
	if (a_len-- > 3 && !stack_sorted(*a))
		pb(b, a);
	while (a_len-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		push_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		push_b_to_a(a, b);
	}
	current_index(*a);
	min_to_top(a);
}
