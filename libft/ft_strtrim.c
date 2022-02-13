/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:46:35 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/21 12:52:11 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		f;
	int		b;

	if (!s1)
		return (NULL);
	f = 0;
	b = ft_strlen(s1);
	while (s1[f] && ft_strchr(set, s1[f]))
		f++;
	while (b && (b - 1) && ft_strchr(set, s1[b - 1]))
		b--;
	if (!(b - 1))
		b = f;
	ret = (char *)malloc(sizeof(*ret) * (b - f + 1));
	if (!ret)
		return (0);
	ret[b - f] = '\0';
	while (b - f)
	{
		ret[b - f - 1] = s1[b - 1];
		b--;
	}
	return (ret);
}
/*
 int main ()
{
	 char str[] =  "khiuiophjiooohiuuu   '' j";
	 char set[] = "";
	 printf("%s", ft_strtrim(str, set));
	 return (0);
}
*/