/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:04:42 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/22 17:51:43 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main ()
{
	t_list	*lst;
	
	t_list *ptr;
	
	lst = ft_lstnew("test");
	ft_lstadd_front(&lst, ft_lstnew("1"));
	ft_lstadd_front(&lst, ft_lstnew("2"));
	ft_lstadd_front(&lst, ft_lstnew("3"));    

	ptr = ft_lstlast(lst);

    printf("%s\n", ptr->content);
}
*/