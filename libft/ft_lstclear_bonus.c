/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:45:27 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/22 17:07:19 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		free (*lst);
		*lst = (*lst)->next;
	}
	lst = 0;
}
/*
int	main ()
{
	t_list	*lst = ft_lstnew(NULL);

	//t_list *ptr = lst;
	// ft_lstadd_back(&lst, ft_lstnew(strdup("1")));
	// ft_lstadd_back(&lst, ft_lstnew(strdup("2")));
	// ft_lstadd_back(&lst, ft_lstnew(strdup("3")));
	ft_lstclear(&lst, free);   
   while(lst)
   {
     printf("%s\n", lst->content);
     lst = lst->next;
    }
}
*/