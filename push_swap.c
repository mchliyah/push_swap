/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:21:21 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/13 22:22:25 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		*arr;

	a = initial_stack(a, ac, av);
	b = initial_stack(b, ac, NULL);
	arr = malloc(sizeof(int *) * a.l);
	if (a.l <= 3)
		handle_3(&a, &b);
	else if (a.l > 3 && a.l <= 5)
		handle_5(&a, &b);
	if (a.l > 5)
	{
		arr = ft_memcpy(arr, a.dt, a.l * sizeof(int));
		int	i;
		int	j;
		int	med;
		int tmp;

		i = 0;
		while (i < a.l)
		{
			j = 0;
			while (j < a.l)
			{
				if (j + 1 < a.l && arr[j] > arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
				j++;
			}
			i++;
		}
		med = arr[a.l / 2];
		
	}
	printf("\033[0;34mafter sort\n");
	for (int n = a.top; n >= 0 ; n--)
		printf("%d\n", a.dt[n]);
	free (a.dt);
	free (b.dt);
	free (arr);
	return (0);
}