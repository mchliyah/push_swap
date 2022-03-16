/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:49:40 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/16 17:44:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

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
	if (is_ther(b->dt, k, b->l, b->l))
	{
		while (index >= 0 && b->dt[index] != k)
		{
			index--;
		}
		return (index);
	}
	return (-1);
}
