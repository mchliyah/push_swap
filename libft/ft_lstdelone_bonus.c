/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:21:17 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/20 21:31:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
/*
int main ()
{
	t_list	*node1=ft_lstnew(strdup("1"));
	t_list	*node2=ft_lstnew(strdup("2"));
	t_list	*node3=ft_lstnew(strdup("3"));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstdelone(node3,free);
	while(node1)
	{
		printf("%s\n", node1->content);
		node1 = node1->next;
	}
}
*/