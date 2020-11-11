/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:34:05 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/11 23:38:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		i;

	i = 0; 
	while (lst[i]->next != NULL)
	{
		del(lst[i]->content);
		free(lst[i]->content);
		lst[i] = lst[i]->next;
		i++;
	}
	if (lst[i]->next == NULL)
	{
		del(lst[i]->content);
		free(lst[i]->content);
	}	
}