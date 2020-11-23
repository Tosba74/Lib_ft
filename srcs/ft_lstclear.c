/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:34:05 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/17 17:58:44 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	
	if (*lst == NULL)
	{
		ft_lstdelone(*lst, del);
		return ;
	}
	while (*lst != NULL)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = list;
	}
}