/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:26:45 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/31 22:16:47 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

// Sorts stack 'a' if it has 3 nodes
void	sort_three(t_stack **a)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}
