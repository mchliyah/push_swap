/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:20:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/11 19:33:23 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	initial_stack(t_stack stack, int ac, char **av)
{
	int		i;

	if (av)
	{
		stack.top = ac - 2;
		stack.l = ac - 1;
		stack.dt = malloc(sizeof(int *) * stack.l);
		ft_check_av(ac, av);
		i = -1;
		while (++i < stack.l)
			stack.dt[i] = ft_atoi(av[ac - i - 1]);
		for (int n = stack.top; n >= 0 ; n--)
			printf("%d\n", stack.dt[n]);
	}
	else
	{
		stack.top = ac - 2;
		stack.l = 0;
		stack.dt = malloc(sizeof(int *) * stack.l);
	}
	return (stack);
}
