/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:40:04 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/04 13:59:45 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void   *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *s;
    size_t          i;

    s = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        v[i] = (unsigned char)c;
        i++; 
    }
    return (b);
}

#include <stdio.h>

int     main(int ac, char **av)
{
    if (ac > 1)
    {
        printf("%s\n", ft_memset(av[1], av[2], 3));
    }
    return (0);
}
