/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:43:52 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/23 23:35:34 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (FAILURE);
	else if (argc	 == 2)
		argv = ft_split(argv[1], ' ');
	init_stack_a(&a, argv + 1);
	// if (!stack_sorted(a))
	// {
	// 	if (stack_len(a) == 2)
	// 		sa(&a, false);
	// 	else if (stack_len(a) == 3)
	// 		sort_three(&a);
	// 	else
	// 		sort_stacks(&a, &b);
	// }
	free_stack(&a);
	return (OK);
}