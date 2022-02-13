/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:22:32 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/11 19:44:15 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pop(t_stack *stack)
{
	int		i;

	i = ft_empty(stack->l);
	if (i == 0)
		exit(0);
	stack->l = stack->l - 1;
}

void	push(t_stack *stack, int x)
{
	int		i;

	i = 0;
	if (stack->l <= stack->top)
	{
		stack->l = stack->l + 1;
		stack->dt[stack->l - 1] = x;
		i++;
	}
}

void	ft_push(t_stack *stack_a, t_stack *stack_b, int c)
{
	t_stack	ret_stack;

	if (c == 'a')
	{
		push(stack_a, stack_b->dt[stack_b->l - 1]);
		ft_pop(stack_b);
		write(1, "\033[0;32mpa\n", 11);
	}
	else if (c == 'b')
	{
		push(stack_b, stack_a->dt[stack_a->l - 1]);
		ft_pop(stack_a);
		write(1, "\033[0;32mpb\n", 11);
	}
}
