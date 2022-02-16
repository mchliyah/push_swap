/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:21:21 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/14 19:08:39 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int	*arr;

	a = initial_stack(a, ac, av);
	b = initial_stack(b, ac, NULL);
	if (a.l <= 3)
		handle_3(&a, &b);
	else if (a.l > 3 && a.l <= 5)
		handle_5(&a, &b);
	if (a.l > 5)
	{
		arr = malloc(sizeof(int *) * a.l);
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
				if (j + 1 < a.l && arr[j] < arr[j + 1])
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
		// while (a.l > 1)
		// {
			while (b.l <= a.l / 2)
			{
				if (a.dt[a.l - 1] < med)
					ft_push(&a, &b, 'b');
				else
				{
					if (b.l > 1 && b.dt[b.l - 1] < b.dt[0])
						ft_rotat(&a, &b, 1);
					else
						ft_rotat(&a, NULL, 1);
				}
			}
			handle_5(&a, &b);
		// }
	}
	printf("\033[0;34mafter sort\n");
	for (int n = a.l - 1; n >= 0 ; n--)
		printf("%d\n", a.dt[n]);
	free (a.dt);
	free (b.dt);
	free (arr);
	return (0);
}