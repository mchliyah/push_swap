/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:20:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/14 18:08:25 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	initial_stack(t_stack stack, int ac, char **av)
{
	int		i;

	stack.sortd = 0;
	if (av)
	{
		stack.l = ac - 1;
		stack.dt = malloc(sizeof(int *) * stack.l);
		ft_check_av(ac, av);
		i = -1;
		while (++i < stack.l)
			stack.dt[i] = ft_atoi(av[ac - i - 1]);
		for (int n = stack.l - 1; n >= 0 ; n--)
			printf("%d\n", stack.dt[n]);
	}
	else
	{
		stack.l = 0;
		stack.dt = malloc(sizeof(int *) * stack.l);
	}
	return (stack);
}
