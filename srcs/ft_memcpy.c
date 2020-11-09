/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:41:15 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 17:48:19 by bmangin          ###   ########lyon.fr   */
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

#include <stdio.h>
int     main(int ac, char **av)
{
    if(ac == 5)
    {
        char    *ref = (char*)memcpy((void*)av[1], (const void*)av[2], 5);
        char    *moi = (char*)ft_memcpy((void*)av[3], (const void*)av[4], 5);
        printf("REF -- %s\n", ref);
        printf("MOI -- %s\n", moi);
    }
    return (0);
}
