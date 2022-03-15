/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:06:53 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:24:34 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_getstrdup(const char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc (sizeof (char) * ft_strlen(src) + 1);
	if (!p)
		return (0);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	if (start > ft_strlen((char *)s))
		return (ft_getstrdup(""));
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		dest[i] = *s2;
		i++;
		s2++;
	}
	dest[i] = '\0';
	free((char *)s1);
	return (dest);
}
