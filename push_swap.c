/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapc                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:21:21 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/17 01:56:10 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	*getarr_sorted(t_stack *a)
{
	int	*arr;
	int	i;
	int	j;
	int	tmp;

	arr = malloc(sizeof(int *) * a->l);
	arr = ft_memcpy(arr, a->dt, a->l * sizeof(int));
	i = 0;
	while (i < a->l)
	{
		j = 0;
		while (j < a->l)
		{
			if (j + 1 < a->l && arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	error_repeet(t_stack *a)
{
	free_st (a, NULL, NULL);
	write(2, "Error\n", 6);
	exit(0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;

	a = NULL;
	b = NULL;
	arr = NULL;
	a = initial_a(a, ac, av);
	if (is_repeet(a))
		error_repeet(a);
	if (is_sorted(a))
	{
		free_st (a, NULL, NULL);
		exit(0);
	}
	b = initial_b(a, b, ac);
	arr = getarr_sorted(a);
	if (a->l <= 3)
		handle_3(a);
	else if (a->l > 3 && a->l <= 5)
		handle_5(a, b);
	if (a->l > 5)
		sort_cmplx(a, b, arr);
	free_st (a, b, arr);
	return (0);
}
