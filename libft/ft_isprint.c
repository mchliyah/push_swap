/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:57 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/10 17:36:28 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int test = ' ';
	int nest = '\n';
   int	mest = 'h';

   printf("%d\n", ft_isprint(test));
	printf("%d\n", ft_isprint(nest));
	printf("%d\n", ft_isprint(mest));
	return (0);
}*/
