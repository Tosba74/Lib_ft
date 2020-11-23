/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:37:56 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/19 15:54:01 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	if (lst == NULL)
		return (NULL);
	if (!(list = (t_list*)malloc(sizeof(*lst))))
		return (NULL);	
	while (lst)
	{
		del(list->content);
		list->content = f(lst->content);
		if (lst->next == NULL)
			return (list);
		else
		{
			list->next = lst->next;
			list = lst->next;
		}
	}
	return (list);
}