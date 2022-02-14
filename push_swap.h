/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:24:09 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/14 18:08:01 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//biblio needed in fonctions
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*dt;
	int	l;
	int	sortd;
}	t_stack;

t_stack	initial_stack(t_stack stack, int ac, char **av);
void	ft_push(t_stack *stack_a, t_stack *stack_b, int c);
void	ft_rotat(t_stack *stack_a, t_stack *stack_b, int sens);
void	ft_swap(t_stack *stack_a, t_stack *stack_b);
int		ft_empty(int len);
t_stack	initial_stack(t_stack stack, int ac, char **av);
void	ft_check_av(int ac, char **av);
void	handle_3(t_stack *a, t_stack *b);
void	handle_5(t_stack *a, t_stack *b);

#endif