/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:24:09 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/16 17:52:36 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//biblio needed in fonctions
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int	*dt;
	int	l;
	int	top;
	int	d_size;
}	t_stack;

t_stack	*initial_a(t_stack *a, int ac, char **av);
t_stack	*initial_b(t_stack *a, t_stack *b, int ac);
void	ft_push(t_stack *stack_a, t_stack *stack_b, int c);
void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens);
void	ft_swap(t_stack *stack_a, t_stack *stack_b);
int		is_sorted(t_stack *s);
int		check(t_stack *s, int ac, char **av);
void	handle_3(t_stack *a);
void	handle_5(t_stack *a, t_stack *b);
void	sort_cmplx(t_stack *a, t_stack *b, int *arr);
void	free_st(t_stack *a, t_stack *b, int *arr);
int		is_ther(int *arr, int arg, int rang, int len);
int		get_index(int k, t_stack *b);

#endif