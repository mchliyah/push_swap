/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:20:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:24:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

t_stack	*initial_a(t_stack *a, int ac, char **av)
{
	int		i;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (0);
	a->top = ac - 2;
	a->l = ac - 1;
	a->dt = malloc(sizeof(int) * ac);
	if (!a->dt)
	{
		free(a);
		return (0);
	}
	i = -1;
	while (++i < a->l)
		a->dt[i] = ft_atoi(av[ac - i - 1]);
	return (a);
}

t_stack	*initial_b(t_stack *a, t_stack *b, int ac)
{
	b = malloc(sizeof(t_stack));
	if (!b)
	{
		free_st(a, NULL, NULL);
		return (0);
	}
	b->top = ac - 2;
	b->l = 0;
	b->dt = malloc(sizeof(int) * ac - 1);
	if (!b->dt)
	{
		free_st(a, NULL, NULL);
		free(b);
		return (0);
	}
	return (b);
}
