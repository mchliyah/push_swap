/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:07:53 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 01:28:30 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

//biblio needed in fonctions
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "get_next_line.h"

typedef struct s_stack
{
	int	*dt;
	int	l;
	int	top;
}	t_stack;

t_stack	*initial_a(t_stack *a, int ac, char **av);
t_stack	*initial_b(t_stack *a, t_stack *b, int ac);
void	ft_push(t_stack *stack_a, t_stack *stack_b, int c);
void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens);
void	ft_swap(t_stack *stack_a, t_stack *stack_b);
int		is_sorted(t_stack *s);
int		check(t_stack *s, int ac, char **av);
void	sort_cmplx(t_stack *a, t_stack *b, int *arr);
void	free_st(t_stack *a, t_stack *b, void *arr);
int		is_ther(int *arr, int arg, int rang, int len);
int		get_index(int k, t_stack *b);
int		down_size(t_stack *a, int *arr);

#endif