/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:40:31 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 21:56:42 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t  ft_strlen(const char *s)
{
    size_t   i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void   *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	lens;
	size_t	lend;
	char	*ssrc;
	char	*sdst;

	lens = ft_strlen(ssrc);
	lend = ft_strlen(sdst);
	ssrc = (char*) src;
	sdst = (char*) dst;
	if (src <= dst)
	{
		i = 1;
		while (i != len)
		{
			sdst[len - i] = ssrc[len - i];
			i++;	
		}
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
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
        char    *ref = (char*)memmove((void*)av[1], (const void*)av[2], 5);
        char    *moi = (char*)ft_memmove((void*)av[3], (const void*)av[4], 5);
        printf("REF -- %s\n", ref);
        printf("MOI -- %s\n", moi);
    }
    return (0);
}
