/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:07:50 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 01:44:08 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error(t_stack *a, t_stack *b, char *str)
{
	free_st (a, b, str);
	write(2, "Error\n", 6);
	exit(0);
}

static void	action(t_stack *a, t_stack *b, char *str)
{
	if (!ft_strncmp(str, "sa", 2))
		ft_swap(a, NULL);
	else if (!ft_strncmp(str, "sb", 2))
		ft_swap(NULL, b);
	else if (!ft_strncmp(str, "ss", 2))
		ft_swap(a, b);
	else if (!ft_strncmp(str, "pa", 2))
		ft_push(a, b, 'a');
	else if (!ft_strncmp(str, "pb", 2))
		ft_push(a, b, 'b');
	else if (!ft_strncmp(str, "ra", 2))
		ft_rotat(a, NULL, 1);
	else if (!ft_strncmp(str, "rb", 2))
		ft_rotat(NULL, b, 1);
	else if (!ft_strncmp(str, "rra", 3))
		ft_rotat(a, NULL, -1);
	else if (!ft_strncmp(str, "rrb", 3))
		ft_rotat(NULL, b, -1);
	else if (!ft_strncmp(str, "rrr", 3))
		ft_rotat(a, b, -1);
	else if (!ft_strncmp(str, "rr", 2))
		ft_rotat(a, b, 1);
	else
		error(a, b, str);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*str;

	a = NULL;
	b = NULL;
	a = initial_a(a, ac, av);
	if (!check(a, ac, av))
		error(a, NULL, NULL);
	b = initial_b(a, b, ac);
	str = get_next_line(0);
	while (str)
	{
		action(a, b, str);
		free(str);
		str = get_next_line(0);
	}
	if (is_sorted(a) && a->l == ac - 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_st (a, b, str);
	return (0);
}
