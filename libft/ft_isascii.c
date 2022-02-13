/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:09:16 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/10 21:14:10 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
/*
int main ()
{
	int asc = 1;
	int nnasc = ;
	printf("%d\n",ft_isascii(asc));
	printf("%d\n", ft_isascii(nnasc));
	return 0;
}*/
