/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:16:04 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:21:14 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	handle_3(t_stack *a)
{
	if (a->l == 2)
	{
		if (a->dt[0] < a->dt[1])
			ft_swap(a, NULL);
	}
	else
	{
		if ((a->dt[0] > a->dt[2] && a->dt[2] > a->dt[1])
			|| (a->dt[0] < a->dt[1] && a->dt[2] > a->dt[1])
			|| (a->dt[2] < a->dt[0] && a->dt[1] > a->dt[0]))
			ft_swap(a, NULL);
		if (a->dt[0] > a->dt[1] && a->dt[0] < a->dt[2])
			ft_rotat(a, NULL, 1);
		if (a->dt[2] < a->dt[1] && a->dt[2] > a->dt[0])
			ft_rotat(a, NULL, -1);
	}
}

void	refull_5(t_stack *a, t_stack *b)
{
	while (b->l)
	{
		if (b->dt[b->l - 1] < a->dt[a->l - 1])
			ft_push(a, b, 'a');
		else if (a->l > 1 && b->dt[b->l - 1] > a->dt[a->l - 1]
			&& b->dt[b->l - 1] < a->dt[a->l - 2])
		{
			ft_rotat(a, NULL, 1);
			ft_push(a, b, 'a');
			if (b->dt[b->l - 1] > a->dt[0])
			{
				ft_push(a, b, 'a');
				ft_rotat(a, NULL, -1);
			}
			else
			{
				ft_rotat(a, NULL, -1);
				ft_push(a, b, 'a');
			}
		}
	}
}

void	handle_5(t_stack *a, t_stack *b)
{
	while (a->l > 3)
	{
		if (a->dt[a->l - 1] > a->dt[0] && a->dt[a->l - 2] > a->dt[0])
			ft_rotat(a, NULL, -1);
		if (a->dt[a->l - 2] < a->dt[a->l - 1] && a->dt[a->l - 2] < a->dt[0])
			ft_swap(a, NULL);
		ft_push(a, b, 'b');
	}
	if (b->dt[1] < b->dt[0] && ((a->dt[0] > a->dt[2] && a->dt[2] > a->dt[1])
			|| (a->dt[0] < a->dt[1] && a->dt[2] > a->dt[1])
			|| (a->dt[2] < a->dt[0] && a->dt[1] > a->dt[0])))
		ft_swap(a, b);
	if (b->l > 1 && b->dt[b->l - 1] < b->dt[b->l - 2])
		ft_swap(NULL, b);
	handle_3(a);
	refull_5(a, b);
}
