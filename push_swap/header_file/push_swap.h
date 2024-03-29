/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:50:56 by seckhard          #+#    #+#             */
/*   Updated: 2024/02/01 19:13:02 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

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
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

//*Error/Free handling
void	free_stack(t_stack	**stack);
void	free_errors(t_stack	**a);
int		error_syntax(char *str_check);
int		error_duplicate(t_stack *a, int n);

//*Stack Initialization
void	init_stack_a(t_stack **a, char	**argv);
void	push_init(t_stack **stack, t_stack *top_node, char stack_name);
t_stack	*get_cheapest(t_stack *stack);

//*Push Initialization
void	current_index(t_stack *stack);
void	init_nodes_a(t_stack *a, t_stack *b);
void	init_nodes_b(t_stack *a, t_stack *b);

//*Sort Algorithm
void	sort_all(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);

//*Sort Algorithm Utils
void	push_a_to_b(t_stack **a, t_stack **b);
void	push_b_to_a(t_stack **a, t_stack **b);
void	min_to_top(t_stack **a);

//*Stack Utils
t_stack	*find_last(t_stack *stack);
t_stack	*find_max(t_stack *stack);
t_stack	*find_min(t_stack *stack);
int		stack_len(t_stack *stack);
bool	stack_sorted(t_stack *stack);

#endif