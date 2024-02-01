/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:27:39 by seckhard          #+#    #+#             */
/*   Updated: 2024/02/01 18:38:02 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

// Finds last node
t_stack	*find_last(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

// Checks if stack is sorted in ascending order
bool	stack_sorted(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

// Counts stack's length
int	stack_len(t_stack *stack)
{
	int	count;

	if (stack == NULL)
		return (FAILURE);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

// Finds largest number in the stack
t_stack	*find_max(t_stack *stack)
{
	t_stack	*max_node;

	if (stack == NULL)
		return (NULL);
	max_node = NULL;
	while (stack)
	{
		if (stack->nbr > LONG_MIN)
			if (max_node == NULL || stack->nbr > max_node->nbr)
				max_node = stack;
		stack = stack->next;
	}
	return (max_node);
}

// Finds lowest number in a stack
t_stack	*find_min(t_stack *stack)
{
	t_stack	*min_node;

	if (stack == NULL)
		return (NULL);
	min_node = NULL;
	while (stack)
	{
		if (stack->nbr < LONG_MAX)
			if (min_node == NULL || stack->nbr < min_node->nbr)
				min_node = stack;
		stack = stack->next;
	}
	return (min_node);
}
