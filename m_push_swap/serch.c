/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:49:40 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:21:09 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

int	down_size(t_stack *a, int *arr)
{
	int	i;
	int	cont;

	cont = 0;
	i = get_index(arr[0], a);
	while (i > 0)
	{
		cont++;
		i--;
	}
	return (cont);
}
