/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:57:59 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/18 15:18:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < (n))
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int main ()
{
	char str1[20] = "!!!!!ha!aaa";
	char str2[20] = "Wahyata";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	char st1[20] = "!!!!!ha!aaa";
	char st2[20] = "Wayata";
	printf("%d\n", strncmp(st1, st2, 4));
	return 0;
}
*/