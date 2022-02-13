/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:53:30 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/18 16:41:40 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (r);
}
/*
#include <stdio.h>
int main ()
{
	char hey[7] = "tlkMe8*";
	char by[] = "";
	printf("%zu\n",ft_strlcpy(by, hey, 5));
	printf("%s\n", by);
	return (0);

}
*/
