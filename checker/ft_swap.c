/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:20:33 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 00:54:07 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
		swap(stack_a);
		swap(stack_b);
	}
	else if (stack_a)
		swap(stack_a);
	else if (stack_b)
		swap(stack_b);
}
