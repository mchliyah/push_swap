/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:23:26 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/09 15:56:18 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_pop(t_stack *stack)
{
	int		i;
	t_stack	new;

	i = ft_empty(stack->l);
	if (i == 0)
		exit(0);
	new.l = stack->l - 1;
	new.dt = malloc(sizeof(int) * new.l);
	i = 0;
	while (i < new.l)
	{
		new.dt[i] = stack->dt[i];
		i++;
	}
	free (stack->dt);
	return (new);
}
