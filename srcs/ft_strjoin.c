/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:08:23 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 00:48:03 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	ft_strcat(ft_strcpy(s, s1), s2);
	return (s);
}