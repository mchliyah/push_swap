/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:43:05 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/20 21:28:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(long i)
{
	int	scount;

	scount = 0;
	if (i < 0)
	{
		scount++;
		i = -i;
	}
	while (i > 9)
	{
		scount++;
		i /= 10;
	}
	if (i >= 0 && i <= 9)
		scount++;
	return (scount);
}

static	char	*nb_conv(int l, long int d, char *str)
{
	int	i;

	i = 0;
	if (d < 0)
	{
		str[i] = '-';
		d = -1 * d;
		i++;
	}
	while (i < l)
	{
		str[--l] = (d % 10) + '0';
		d /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	d;

	d = (long int)n;
	len = counter(d);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	nb_conv(len, d, str);
	return (str);
}
/*
int main()
{
	printf("%s\n", ft_itoa(-623));
}
*/