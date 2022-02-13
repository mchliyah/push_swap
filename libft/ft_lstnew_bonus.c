/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:43:30 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/17 16:01:38 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
int main ()
{
	t_list	*node1=ft_lstnew("1");
	t_list *node2=ft_lstnew("2");
	t_list *node3=ft_lstnew("3");
	t_list *head;
	
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	head=node1;
	while(head != NULL)
	{
		printf("%s\n",head->content);
		head=head->next;
	}
}
*/