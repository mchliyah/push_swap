/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:11:18 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/18 00:13:40 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	if (str[i] == (unsigned char)c)
		return (&str[i]);
	return (NULL);
}
/*
int main()
{
	char dest;
	char str[] = "hewllo world";

	printf("%s\n", ft_strrchr(str, 'w'));
	return(0);
}
*/
