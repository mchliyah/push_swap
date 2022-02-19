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

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;

	a = NULL;
	b = NULL;
	a = initial_stack(a, ac, av);
	arr = getarr_sorted(a);
	if (is_sorted(a))
	{
		free_st (a, NULL, arr);
		write(1, "stack is sorted\n", 16);
		exit(0);
	}
	b = initial_stack(b, ac, NULL);
	if (a->l <= 3)
		handle_3(a);
	else if (a->l > 3 && a->l <= 5)
		handle_5(a, b);
	if (a->l > 5)
		sort_cmplx(a, b, arr);
	free_st (a, b, arr);
	return (0);
}
