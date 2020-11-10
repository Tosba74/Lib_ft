/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:41:58 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 23:02:29 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char 	*str1;
	const char 	*str2;

	i = 0;
	str1 = (const char*)s1;
	str2 = (const char *)s2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i >= n)
		return (0);
	else
		return (str1[i] - str2[i]);
}