/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:01:08 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/21 16:22:08 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d_len;
	size_t		s_len;
	size_t		i;
	size_t		j;

	if (!dstsize)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	if (dstsize < d_len)
		return (dstsize + s_len);
	while (i < dstsize - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (d_len + s_len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char ara[] = "thgghsiui";
	char hak[] = "fo";
	size_t i = ft_strlcat(ara, hak, -2);
	printf("%zu\n", i);
	return (0);
}
*/