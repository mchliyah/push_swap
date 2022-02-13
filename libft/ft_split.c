/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:58:20 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/10 20:44:28 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*f_strndup(char *src, size_t n)
{
	size_t	i;
	char	*p;

	p = malloc (sizeof (char) * (n + 1));
	if (!p)
		return (0);
	i = 0;
	while (src[i] && i < n)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static int	ft_contword(char const *str, char c)
{
	int	word;
	int	j;

	word = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && str[j] != c && str[j])
			j++;
		while (str[j] && str[j] == c)
			j++;
		word++;
	}
	if (str[0] == c)
		word--;
	return (word);
}

static void	wloop(char const *s, char c, char **str)
{
	int		str_glob;
	int		end;
	int		str_loc;

	str_glob = 0;
	str_loc = 0;
	while (s[str_glob])
	{
		if (s[str_glob] != c)
		{
			end = str_glob;
			while (s[end] != c && s[end] != '\0')
				end++;
			str[str_loc] = f_strndup((char *)&s[str_glob], end - str_glob);
			while (s[str_glob] != c && s[str_glob])
				str_glob++;
			str_loc++;
		}
		else
			str_glob++;
	}
	str[str_loc] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_contword(s, c) + 1) * sizeof (char *));
	if (!str)
		return (NULL);
	wloop(s, c, str);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *s="123.123.123.123...";
	char c = '.';

	char **ptr;
	ptr = ft_split(s, c);
	int i = 0;
	while(ptr[i])
	{
		printf("'%s'\n",ptr[i]);
		i++;
	}
}
*/