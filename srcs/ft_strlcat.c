/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:00:32 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/04 23:08:14 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t  ft_strlen(const char *s);

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t  j;

	i = 0;
	j = 0;
	if (ft_strlen(dst) == 0)
        return (ft_strlen(src));
    if (dstsize == 0)
		return (i + ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && dstsize > j + i + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
