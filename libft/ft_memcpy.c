/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:09:56 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/13 19:55:15 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst != src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char	s1[20] = "123";
	char	s[10] = "12354885564";
	char	d1[20] = "123";

	//char *d = NULL;
	//printf("%s\n", memcpy(s+4, s, 5));
	printf("%s\n", ft_memcpy(s+4, s, 5));
	return (0);
}
*/
