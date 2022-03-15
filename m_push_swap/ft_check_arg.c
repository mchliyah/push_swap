/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:25:50 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:20:36 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	check_int(int i, char **av)
{
	if ((av[i][0] == '-' && ft_atoi(av[i]) >= 0)
			|| (av[i][0] != '-' && ft_atoi(av[i]) < 0)
			|| ft_strlen(av[i]) > 11)
		return (0);
	return (1);
}

static int	ft_check_av(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac <= 1)
		exit (0);
	while (++i < ac)
	{
		j = 0;
		if (av[i][0] == '\0')
			return (0);
		while (av[i][j] && i < ac)
		{
			if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
				j++;
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		check_int(i, av);
	}
	return (1);
}

static int	is_repeet(t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i <= a->top)
	{
		j = i;
		while (++j <= a->top)
		{
			if (a->dt[i] == a->dt[j])
				return (0);
		}
		i++;
	}
	return (1);
}

int	is_sorted(t_stack *s)
{
	int	i;

	i = s->l - 1;
	while (i > 0)
	{
		if (s->dt[i] < s->dt[i - 1])
			i--;
		else
			return (0);
	}
	return (1);
}

int	check(t_stack *s, int ac, char **av)
{
	int	check[2];

	check[0] = ft_check_av(ac, av);
	check[1] = is_repeet(s);
	if (check[0] == 0 || check[1] == 0)
		return (0);
	return (1);
}
