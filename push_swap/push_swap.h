/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:50:56 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/23 23:34:41 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

# define OK 0
# define FAILURE 1

typedef struct s_stack
{
	long			nbr;
	long			index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;

	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

//*Operations
void	sa(t_stack **a, bool print);
void	sb(t_stack **b, bool print);
void	ss(t_stack **a, t_stack **b, bool print);
void	ra(t_stack **a, bool print);
void	rb(t_stack **b, bool print);
void	rr(t_stack **a, t_stack **b, bool print);
void	rra(t_stack **a, bool print);
void	rrb(t_stack **b, bool print);
void	rrr(t_stack **a, t_stack **b, bool print);
void	pa(t_stack **b, t_stack **a, bool print);
void	pb(t_stack **a, t_stack **b, bool print);

//*Error/Free handling
void	free_stack(t_stack	**stack);

//*Stack Initialization
void	init_stack_a(t_stack **a, char	**argv);

//*Sort Algorithm
void	sort_three(t_stack **a);

//*Utils
t_stack	*find_max(t_stack *stack);
t_stack	*find_last(t_stack *stack);

#endif