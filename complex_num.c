/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:56:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/17 00:26:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_cmplx(t_stack *a, t_stack *b)
{
    sort_cmplx(&a, &b);
		arr = malloc(sizeof(int *) * a->l);
		arr = ft_memcpy(arr, a->dt, a->l * sizeof(int));
		int	i;
		int	j;
		int	med;
		int tmp;

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
		int n;
		n = 8;
		while (--n >= 0)
		{
			med = arr[n * a->top / 8];
			track = (n * a->top) / 8;
			while (a->l - 1 > track)
			{
				if (a->l && a->dt[a->l - 1] <= med)
					ft_push(&a, &b, 'b');
				if (b->l > 1 && a->dt[a->l - 1] > med && b->dt[b->l - 1] < b->dt[0])
					ft_rotat(&a, &b, 1);
				if (b->l && b->dt[b->l - 1] < b->dt[0])
					ft_rotat(NULL, &b, 1);
				if (a->l > 1 && a->dt[a->l - 1] > med && a->dt[a->l - 2] > med)
					ft_rotat(&a, NULL, 1);
				if ((a->l > 1 && b->l > 1)
					&& (a->dt[a->l - 1] > a->dt[a->l - 2])
					&& (b->dt[b->l - 1] < b->dt[b->l - 2]))
					ft_swap(&a, &b);
				else if (a->l > 1 && a->dt[a->l - 1] > a->dt[a->l - 2])
					ft_swap(&a, NULL);
				else if (b->l > 1 && b->dt[b->l - 1] < b->dt[b->l - 2])
					ft_swap(NULL, &b);
			}
		}
		//int k = 0;
		int index;
	// printf("\033[0;34mastack_b\n");
	// for (int n = b.l - 1; n >= 0 ; n--)
	// 	printf("%d\n", arr[n]);
		while (b->l != 0)
		{
	//printf("b.l = %d\n", b.l);
		// 	if (a.dt[a.l - 1] > a.dt[0])
		// 		ft_rotat(&a, NULL, 1);
		// 	if (b.dt[b.l - 1] < b.dt[0])
		// 		ft_rotat(NULL, &b, 1);
		// 	if (b.dt[b.l - 1] < b.dt[b.l - 2] && a.dt[a.l - 1] > a.dt[a.l - 2])
		// 		ft_swap(&a, &b);
		// 	else if (b.dt[b.l - 1] < b.dt[b.l - 2])
		// 		ft_swap(NULL, &b);
		// 	else if (a.dt[a.l - 1] > a.dt[a.l - 2])
		// 		ft_swap(&a, NULL);
		// 	else 
			index = get_index(arr[a->l], b);
			if (index > b->l / 2)
			{
				while (index < b->l - 1)
				{
					index++;
					ft_rotat(NULL, &b, 1);
				}
			}
			else
			{
				while (index >= 0)
				{
					index--;
					ft_rotat(NULL, &b, -1);
				}
			}
			if (arr[a->l] == b->dt[b->l - 1])
			{
				ft_push(&a, &b, 'a');
				//printf("****%d\n", a.l);
				//k++;
			}
		}
}