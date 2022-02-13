/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:54:03 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/19 19:08:07 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, int n)
{
	ft_memset(str, '\0', n);
}

/*
#include <stdio.h>
int main()
{
	char test1[] = "test1";
	char test2[] = "test2";
	
	ft_bzero(test2, 3);
	bzero(test1, 3);

	printf("%s\n", test1);
	printf("%s\n", test2);
	return (0);
}
*/
