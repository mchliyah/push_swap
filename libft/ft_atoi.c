/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:03:21 by mchliyah          #+#    #+#             */
/*   Updated: 2022/02/23 18:13:55 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static long	loop(const char *str, int signe)
{
	long	result;
	long	help;

	result = 0;
	help = 0;
	while (*str >= '0' && *str <= '9')
	{
		help = 10 * help + (*str - '0');
		if (signe == -1)
		{
			if (help / 10 != result)
				return (0);
		}
		if (signe == 1)
		{
			if (help / 10 != result)
				return (-1);
		}
		result = 10 * result + (*str - '0');
		str++;
	}
	return (result * signe);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		signe;

	result = 0;
	signe = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
				str++;
	}
	else if (*str == '+')
		str++;
	result = loop(str, signe);
	return (result);
}
