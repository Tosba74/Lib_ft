/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:54:59 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 01:22:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*s1;

	i = 0;
	slen = (len - start);
	if (ft_strlen(s) < start)
		return (0);
	if (!(s1 = (char*)malloc(sizeof(char) * slen) + 1))
		return (NULL);
	while (i < len)
		s1[i++] = s[start++];
	s1[i] = '\0';
	return (s1);
}