/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:56:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/30 21:56:57 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	find_up_big(t_stack *a, t_stack *b, int index)
{
	while (b->l != 0 && index < b->l - 1)
	{
		if (!a->d_size || (b->dt[b->l - 1] > a->dt[0]))
		{
			ft_push(a, b, 'a');
			ft_rotat(a, NULL, 1);
			a->d_size++;
		}
		else
		{
			index++;
			ft_rotat(NULL, b, 1);
		}
	}
}

static void	find_down_big(t_stack *b, int index)
{
	while (b->l != 0 && (index >= 0))
	{
		index--;
		ft_rotat(NULL, b, -1);
	}
}

void	push_a(t_stack *a, t_stack *b, int *arr)
{
	int	index;

	a->d_size = 0;
	while (b->l + a->d_size != 0)
	{
		index = get_index(arr[a->l - a->d_size], b);
		if (index == -1 && a->d_size)
		{
			ft_rotat(a, NULL, -1);
			a->d_size--;
		}
		else
		{
			if (b->l != 0 && index > b->l / 2)
				find_up_big(a, b, index);
			else
				find_down_big(b, index);
		}
		if (arr[a->l - a->d_size] == b->dt[b->l - 1])
			ft_push(a, b, 'a');
	}
}

void	push_b(t_stack *a, t_stack *b, int *arr, int rang)
{
	int	med;

	med = arr[(a-> top + 1) / 2];
	while (a->l && b->l <= (rang * 2))
	{
		if (is_ther(arr, a->dt[a->l - 1], rang, a->top + 1))
		{
			ft_push(a, b, 'b');
			if ((b->l > 1 && a->l > 1 && (b->dt[b->l - 1] < med))
				&& (!(is_ther(arr, a->dt[a->l - 1], rang, a->top + 1))))
				ft_rotat(a, b, 1);
			else if (b->l > 1 && b->dt[b->l - 1] < med)
				ft_rotat(NULL, b, 1);
		}
		else if (a->l > 1)
			ft_rotat(a, NULL, 1);
	}
}

void	sort_cmplx(t_stack *a, t_stack *b, int *arr)
{
	int	rang;
	int	i;

	i = -1;
	if (a->l <= 150)
	{
		rang = 12;
		while (i < b->top)
		{
			push_b(a, b, arr, rang);
			rang = rang + 10;
			i++;
		}
	}
	else if (a->l > 150)
	{
		rang = 42;
		while (i < b->top)
		{
			push_b(a, b, arr, rang);
			rang = rang + 26;
			i++;
		}
	}
	push_a(a, b, arr);
}
