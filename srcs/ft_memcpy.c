/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:41:15 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/04 17:49:30 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
//a caster en char*
    size_t  i;
    

    i = 0;
    while ((dst[i] && src[i]) || i <= n)
    {
        dst[i] = src[i];
        i++;
    }
    return (dst);
}

#include <stdio.h>
int     main(int ac, char **av)
{
    if (ac > 1)
    {
        printf("%s\n", ft_memcpy(av[1], av[2], 5));
    }
}
