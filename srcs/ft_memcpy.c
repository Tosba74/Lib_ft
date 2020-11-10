/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:41:15 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 23:02:24 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t      i;
    const char  *ssrc;
    char        *sdst;
    
    ssrc = (const char*)src;
    sdst = (char*)dst;
    i = 0;
    if (n <= 0)
        return (dst);
    while (i < n)
    {
        sdst[i] = ssrc[i];
        i++;
    }
    return ((void*)sdst);
}