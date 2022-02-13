/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:26:51 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/22 17:38:25 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	ftls(void *lst)
{
	int		i;
	char	*str;

	str = lst;
	i = 0;
	while (str[i])
	{
		str[i] = str[i] - 32;
		i++;
	}
}
#include <stdio.h>
int main ()
{
	t_list	*head=ft_lstnew(strdup("ghdc"));
	t_list	*node1=ft_lstnew(strdup("jdhvv"));
	t_list	*node2=ft_lstnew(strdup("mkd"));
	t_list	*node3=ft_lstnew(strdup("hooe"));

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	ft_lstiter(head, ftls);
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}
*/