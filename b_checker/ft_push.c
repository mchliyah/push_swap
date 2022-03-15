/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:22:32 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:24:11 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	push(t_stack *stack, int x)
{
	if (stack->l <= stack->top)
	{
		stack->l = stack->l + 1;
		stack->dt[stack->l - 1] = x;
		return (1);
	}
	return (0);
}

void	ft_push(t_stack *stack_a, t_stack *stack_b, int c)
{
	if (c == 'a' && stack_b->l != 0)
	{
		if (push(stack_a, stack_b->dt[stack_b->l - 1]))
			stack_b->l = stack_b->l - 1;
	}
	else if (c == 'b' && stack_a->l != 0)
	{
		if (push(stack_b, stack_a->dt[stack_a->l - 1]))
			stack_a->l = stack_a->l - 1;
	}
}
