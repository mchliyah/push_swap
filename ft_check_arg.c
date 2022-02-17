/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:25:50 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/16 04:38:27 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_av(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= 1)
		exit (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] && i < ac)
		{
			if (j == 0 && av[i][j] == '-')
				j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				exit (0);
			j++;
		}
		i++;
	}
	// i = 1;
	// while (i < ac - 1)
	// {
	// 	j = 1;
	// 	while (j < ac - 1)
	// 	{
	// 		if (j + 1 < ac && ft_atoi(av[i]) == ft_atoi(av[j + 1]))
	// 			exit(0);
	// 		j++;
	// 	}
	// 	i++;
	// }
}
