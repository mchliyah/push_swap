/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:21:26 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/18 23:53:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rot(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l < 2)
		return (0);
	i = stack->l - 1;
	tmp = stack->dt[i];
	while (i-- > 0)
		stack->dt[i + 1] = stack->dt[i];
	stack->dt[i + 1] = tmp;
	return (1);
}

int	revrot(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l < 2)
		return (0);
	i = 0;
	tmp = stack->dt[0];
	while (i++ < stack->l - 1)
		stack->dt[i - 1] = stack->dt[i];
	stack->dt[stack->l - 1] = tmp;
	return (1);
}

void	snspositif(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		if (rot(stack_a) && rot(stack_b))
			write(1, "rr\n", 4);
	}
	else if (stack_a)
	{
		if (rot(stack_a))
			write(1, "ra\n", 4);
	}
	else if (stack_b)
	{
		if (rot(stack_b))
			write(1, "rb\n", 4);
	}
}

void	snsnegatif(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		if (revrot(stack_a) && revrot(stack_b))
			write(1, "rrr\n", 4);
	}
	else if (stack_a)
	{
		if (revrot(stack_a))
			write(1, "rra\n", 4);
	}
	else if (stack_b)
	{
		if (revrot(stack_b))
			write(1, "rrb\n", 4);
	}
}

void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens)
{
	if (sens == 1)
		snspositif(stack_a, stack_b);
	else if (sens == -1)
		snsnegatif(stack_a, stack_b);
}
