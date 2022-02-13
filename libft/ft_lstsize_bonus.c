/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:58:37 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/17 16:33:49 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	if (!lst)
		return (0);
	ptr = lst;
	i = 1;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main ()
{
	int size;
	
	t_list	*lst;
	lst = ft_lstnew("test");
	ft_lstadd_back(&lst, ft_lstnew("1"));
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3")); 
	size =    ft_lstsize(lst);
	
     printf("%d\n", size);
	 while (lst)
	 {
		 printf("%s\n", lst->content);
		 lst = lst->next;
	 }
}
*/