/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:37:13 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/10 02:27:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	if (lst->next == NULL)
		return (lst);
	while(lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
}