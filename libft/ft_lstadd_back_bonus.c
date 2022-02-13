/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:09:54 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/22 17:54:27 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		(ft_lstlast(*lst))->next = new;
	}
}
/*
int	main ()
{
	t_list	*lst = ft_lstnew("test");

	//t_list *ptr = lst;
	ft_lstadd_back(&lst, ft_lstnew("1"));
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3"));    
   while(lst)
   {
     printf("%s\n", lst->content);
     lst = lst->next;
    }
}
*/