/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:56:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/19 21:12:23 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	push_b(t_stack *a, t_stack *b, int med, int n)
{
	while (a->l - 1 > ((n * a->top) / 8))
	{
		if (a->l && a->dt[a->l - 1] <= med)
			ft_push(a, b, 'b');
		if (b->l > 1 && a->dt[a->l - 1] > med && b->dt[b->l - 1] < b->dt[0])
			ft_rotat(a, b, 1);
		if (b->l && b->dt[b->l - 1] < b->dt[0])
			ft_rotat(NULL, b, 1);
		if (a->l > 1 && a->dt[a->l - 1] > med && a->dt[a->l - 2] > med)
			ft_rotat(a, NULL, 1);
		if ((a->l > 1 && b->l > 1)
			&& (a->dt[a->l - 1] > a->dt[a->l - 2])
			&& (b->dt[b->l - 1] < b->dt[b->l - 2]))
			ft_swap(a, b);
		else if (a->l > 1 && a->dt[a->l - 1] > a->dt[a->l - 2])
			ft_swap(a, NULL);
		else if (b->l > 1 && b->dt[b->l - 1] < b->dt[b->l - 2])
			ft_swap(NULL, b);
	}
}

void	sort_cmplx(t_stack *a, t_stack *b, int *arr)
{
	int	med;
	int	n;

	n = 8;
	while (--n >= 0)
	{
		med = arr[n * a->top / 8];
		push_b(a, b, med, n);
	}
	push_a(a, b, arr);
	// for (int n = a->l - 1; n >= 0 ; n--)
	// 	printf("%d\n", a->dt[n]);
}
