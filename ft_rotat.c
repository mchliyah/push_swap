/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:21:26 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/18 21:28:30 by mchliyah         ###   ########.fr       */
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
			write(1, "\033[0;32mrr\n", 11);
	}
	else if (stack_a)
	{
		if (rot(stack_a))
			write(1, "\033[0;32mra\n", 11);
	}
	else if (stack_b)
	{
		if (rot(stack_b))
			write(1, "\033[0;32mrb\n", 11);
	}
}

void	snsnegatif(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		if (revrot(stack_a) && revrot(stack_b))
			write(1, "\033[0;32mrrr\n", 11);
	}
	else if (stack_a)
	{
		if (revrot(stack_a))
			write(1, "\033[0;32mrra\n", 11);
	}
	else if (stack_b)
	{
		if (revrot(stack_b))
			write(1, "\033[0;32mrrb\n", 11);
	}
}

void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens)
{
	if (sens == 1)
		snspositif(stack_a, stack_b);
	else if (sens == -1)
		snsnegatif(stack_a, stack_b);
}
