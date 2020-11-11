/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:36:02 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/11 23:38:11 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		if (lst->next == NULL)
			return ;
		f(lst->content);
		lst = lst->next;
	}
}