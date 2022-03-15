/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:21:26 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:24:18 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	rot(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l < 2)
		return ;
	i = stack->l - 1;
	tmp = stack->dt[i];
	while (i-- > 0)
		stack->dt[i + 1] = stack->dt[i];
	stack->dt[i + 1] = tmp;
}

void	revrot(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l < 2)
		return ;
	i = 0;
	tmp = stack->dt[0];
	while (i++ < stack->l - 1)
		stack->dt[i - 1] = stack->dt[i];
	stack->dt[stack->l - 1] = tmp;
}

void	snspositif(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		rot(stack_a);
		rot(stack_b);
	}
	else if (stack_a)
		rot(stack_a);
	else if (stack_b)
		rot(stack_b);
}

void	snsnegatif(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_b)
	{
		revrot(stack_a);
		revrot(stack_b);
	}
	else if (stack_a)
		revrot(stack_a);
	else if (stack_b)
		revrot(stack_b);
}

void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens)
{
	if (sens == 1)
		snspositif(stack_a, stack_b);
	else if (sens == -1)
		snsnegatif(stack_a, stack_b);
}
