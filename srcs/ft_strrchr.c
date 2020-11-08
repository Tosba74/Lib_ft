/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:11:05 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/06 13:42:02 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);
    while (i != 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}