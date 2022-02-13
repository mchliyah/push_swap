/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:26:54 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/12 13:47:41 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	ret = (char *) malloc (sizeof (char) * len + 1);
	if (!ret)
		return (0);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
int main()
{
	system ("leaks a.out");
}
*/