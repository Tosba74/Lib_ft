/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:37:13 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/16 21:46:41 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while(lst->next != NULL)
		lst = lst->next;
	return (lst);
}