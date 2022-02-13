/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:36:19 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/19 15:40:41 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*b;
	size_t	i;

	b = str;
	i = 0;
	while (i < len)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
#include <string.h>
#include<stdio.h>
int main()
{
	//char s[] = "test";
	unsigned int i;

	i = 1;
	memset(&i, 254, sizeof(char)*4);
	printf("%x\n", i);
	//printf("%s\n", ft_memset(s, '3', 2));
	return (0);
}
*/