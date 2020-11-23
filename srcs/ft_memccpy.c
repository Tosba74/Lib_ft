/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:43:29 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 03:17:20 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ssrc;
	unsigned char		*sdst;
	unsigned char		sc;

	i = 0;
	ssrc = (const unsigned char*)src;
	sdst = (unsigned char*)dst;
	sc = (unsigned char)c;
    if (src == NULL && dst == NULL)
        return (NULL);
	while (i < n)
	{
		sdst[i] = ssrc[i];
		if (ssrc[i] == sc)
			return ((void*)sdst + i + 1);
		i++;
	}
	return (NULL);
}