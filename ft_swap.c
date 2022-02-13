/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:20:33 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/09 19:49:59 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->dt[stack->l - 1];
	stack->dt[stack->l - 1] = stack->dt[stack->l - 2];
	stack->dt[stack->l - 2] = tmp;
}

void	ft_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;

	if (stack_a && stack_a->l > 1 && stack_b && stack_b->l > 1)
	{
		swap(stack_a);
		swap(stack_b);
		write (1, "\033[0;32mss\n", 11);
	}
	else if (stack_a && stack_a->l > 1)
	{
		swap(stack_a);
		write (1, "\033[0;32msa\n", 11);
	}
	else if (stack_b && stack_b->l > 1)
	{
		swap(stack_b);
		write (1, "\033[0;32msb\n", 11);
	}
}
