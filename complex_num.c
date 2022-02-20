/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:56:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/20 22:00:29 by mchliyah         ###   ########.fr       */
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

void	sort_cmplx(t_stack *a, t_stack *b, int *arr)
{
	int	rang;
	int	med;
	int	i;

	med = arr[a->l / 2];
	i = -1;
	rang = 25;
	while (i < b->top)
	{
		while (a->l && b->l <= (rang * 2))
		{
			if (is_ther(arr, a->dt[a->l - 1], rang, a->top + 1))
			{
				ft_push(a, b, 'b');
				// if (b->dt[b->l - 1] < med
				// 	&& !(is_ther(arr, a->dt[a->l - 1], rang, a->top + 1)))
				// 	ft_rotat(a, b, 1);
				if (b->dt[b->l - 1] < med)
					ft_rotat(NULL, b, 1);
			}
			else
				ft_rotat(a, NULL, 1);
		}
		rang = rang + 25;
		i++;
	}
	push_a(a, b, arr);
}
