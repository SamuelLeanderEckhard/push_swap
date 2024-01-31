/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:51:08 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/31 23:29:18 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_file/push_swap.h"

void	free_stack(t_stack	**stack)
{
	t_stack	*current;
	t_stack	*tmp;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack	**a)
{
	free_stack(a);
	ft_putstr_fd("Error\n", 2);
	exit(FAILURE);
}

int	error_syntax(char *str_check)
{
	if (!(*str_check == '+' || *str_check == '-' \
			|| (*str_check >= '0' && *str_check <= '9')))
		return (FAILURE);
	if ((*str_check == '+' || *str_check == '-') \
			&& !(str_check[1] >= '0' && str_check[1] <= '9'))
		return (FAILURE);
	++str_check;
	while (*str_check)
	{
		if (!(*str_check >= '0' && *str_check <= '9'))
			return (FAILURE);
		++str_check;
	}
	return (OK);
}

int	error_duplicate(t_stack *a, int n)
{
	if (a == NULL)
		return (OK);
	while (a)
	{
		if (a->nbr == n)
			return (FAILURE);
		a = a->next;
	}
	return (OK);
}
