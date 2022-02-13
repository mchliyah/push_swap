/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:02:26 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/20 21:49:12 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (*s1 != '\0')
	{
		dest[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		dest[i] = *s2;
		i++;
		s2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	printf("%s\n", ft_strjoin("", ""));
	return (0);
}
*/
