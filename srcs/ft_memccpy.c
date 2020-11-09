/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:43:29 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 17:03:10 by bmangin          ###   ########lyon.fr   */
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
	sdst = (unsigned char *)dst;
	sc = (unsigned char)c;
	while (i < n)
	{
		if (ssrc[i] == sc)
			return ((void*)sdst + i + 1);
		sdst[i] = ssrc[i];
		i++;
	}
	return (NULL);
}


#include <stdio.h>
int     main(int ac, char **av)
{
    if(ac == 5)
    {
        char    *ref = (char*)memccpy((void*)av[1], (const void*)av[2], 48, 9);
        char    *moi = (char*)ft_memccpy((void*)av[3], (const void*)av[4], 48, 9);
        printf("REF -- %s\n", ref);
        printf("MOI -- %s\n", moi);
    }
    return (0);
}

