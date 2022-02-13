/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:01:35 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/20 21:41:59 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void ( *f)(unsigned int, char *))
{
	size_t	l;
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	l = ft_strlen(s);
	while (i < l)
	{
		f (i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
void	test(unsigned int t, char *h)
{
	if (*h > 64 && *h < 91)
		*h = *h + 32;
	else
		*h = t + 48;
}

int main()
{
	char str[] = "dgfGDSGgg";
	
	ft_striteri(str, test);
	
	printf("%s\n", str);
}
*/
