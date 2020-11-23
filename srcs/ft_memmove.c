/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:40:31 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/13 16:58:18 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void   *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	const unsigned char	*ssrc;
	unsigned char		*sdst;

	i = 1;
	ssrc = (const unsigned char*) src;
	sdst = (unsigned char*) dst;
	if (ssrc == sdst)
		return (dst);
	if (ssrc <= sdst)
	{
		while (*ssrc && i <= len)
		{
			sdst[len - i] = ssrc[len - i];
			i++;	
		}
	}
	else if (ssrc > sdst)
	{
		i -= 1;
		while (i < len)
		{
			sdst[i] = ssrc[i];
			i++;
		}
	}
	return ((void*)sdst);
}