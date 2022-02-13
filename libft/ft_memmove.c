/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:17 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/13 00:32:31 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*s;
	unsigned char			*d;
	size_t					i;

	i = 0;
	s = src;
	d = dst;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (i < len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
/*
#include <string.h>
int main()
{
	char str1[16] = "abcdef";
	char str2[16] = "abcdef";
	printf("%s\n", memmove(str1, str1 + 3, 4));
	printf("%s\n", ft_memmove(str2, str2 + 3, 4));
	return (0);

}
*/
