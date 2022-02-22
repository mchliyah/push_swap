/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:56:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/22 17:27:36 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_ther(int *arr, int arg, int rang, int len)
{
	int	start;
	int	end;

	if (((len / 2) - rang) > 0)
		start = (len / 2) - rang;
	else
		start = 0;
	if (((len / 2) + rang) < len)
		end = (len / 2) + rang;
	else
		end = len - 1;
	while (start <= end)
	{
		if (arr[start] == arg)
			return (1);
	start++;
	}
	return (0);
}

int	get_index(int k, t_stack *b)
{
	int	index;

	index = b->l - 1;
	while (index >= 0 && b->dt[index] != k)
	{
		index--;
	}
	return (index);
}

void	push_a(t_stack *a, t_stack *b, int *arr)
{
	int	index;

	while (b->l != 0)
	{
		index = get_index(arr[a->l], b);
		if (index > b->l / 2)
		{
			while (index < b->l - 1)
			{
				index++;
				ft_rotat(NULL, b, 1);
			}
		}
		else
		{
			while ((index >= 0))
			{
				index--;
				ft_rotat(NULL, b, -1);
			}
		}
		if (arr[a->l] == b->dt[b->l - 1])
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
			if (b->l > 1 && b->dt[b->l - 1] < b->dt[b->l - 2])
				ft_swap(NULL, b);
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
		rang = 30;
		while (i < b->top)
		{
			push_b(a, b, arr, rang);
			rang = rang + 30;
			i++;
		}
	}
	push_a(a, b, arr);
}
