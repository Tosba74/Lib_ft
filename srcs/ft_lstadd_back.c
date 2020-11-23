/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:32:22 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/16 19:19:46 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	list = ft_lstlast(*alst);
	if (list != NULL)
		list->next = new;	
	else
		*alst = new;
}