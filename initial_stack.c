/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:20:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/12 23:25:58 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initial_stack(t_stack *stack, int ac, char **av)
{
	int		i;

	if (av)
	{
		ft_check_av(ac, av);
		stack = malloc(sizeof(t_stack));
		stack->top = ac - 2;
		stack->l = ac - 1;
		stack->dt = malloc(sizeof(int) * ac);
		i = -1;
		while (++i < stack->l)
			stack->dt[i] = ft_atoi(av[ac - i - 1]);
	}
	if (!av)
	{
		stack = malloc(sizeof(t_stack));
		stack->top = ac - 2;
		stack->l = 0;
		stack->dt = malloc(sizeof(int) * ac - 1);
	}
	return (stack);
}
