/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:48:41 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 00:54:19 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_st(t_stack *a, t_stack *b, void *arr)
{
	if (a)
	{
		free (a->dt);
		free(a);
	}
	if (b)
	{
		free(b->dt);
		free(b);
	}
	if (arr)
		free (arr);
}
