/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:20:31 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/25 23:22:34 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

static void	set_target_b(t_stack *a, t_stack *b)
{
	
}

void	init_node_b(t_stack *a, t_stack *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
