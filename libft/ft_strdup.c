/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:18:09 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/20 21:45:21 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*p;
	char	*start;	

	p = malloc (sizeof (char) * ft_strlen(src) + 1);
	if (!p)
		return (0);
	start = p;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (start);
}
/*
#include <stdio.h>
int main()
{
	char ppp[] = "hi hello and salamo3alaykom";
	printf("%d", ft_strlen(ppp));
	printf("%s", ft_strdup(ppp));
}
*/