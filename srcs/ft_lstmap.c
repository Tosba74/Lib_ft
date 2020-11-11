/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:37:56 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/11 23:55:59 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	while (lst->next != NULL)
	{
		list->content = f(lst->content);
		lst = lst->next;
		list = list->next;
	}
	if (lst->next == NULL)
	{
		list->content = f(lst->content);
		list->next = NULL;
	}
	return (list);
}