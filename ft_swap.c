/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:20:33 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/18 23:53:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack *stack)
{
	int	tmp;

	if (stack->l > 1)
	{
		tmp = stack->dt[stack->l - 1];
		stack->dt[stack->l - 1] = stack->dt[stack->l - 2];
		stack->dt[stack->l - 2] = tmp;
		return (1);
	}
	return (0);
}

void	ft_swap(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		if (swap(stack_a) && swap(stack_b))
			write (1, "ss\n", 4);
	}
	else if (stack_a)
	{
		if (swap(stack_a))
			write (1, "sa\n", 4);
	}
	else if (stack_b)
	{
		if (swap(stack_b))
			write (1, "sb\n", 4);
	}
}
