/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:18:08 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/18 17:40:33 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			l;
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (0);
	l = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	while (i < l)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	test(unsigned int t, char h)
{
	if (h > 64 && h < 91)
		return (h + 32);
	return (t + '0');
}
int main()
{
	char str[] = "SALAM";
	char *str1 ;
	str1 = ft_strmapi(str, test);
	
	printf("%s\n", str1);
}
*/
