/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:11:05 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 03:52:01 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);
    while (i != 0 && s[i] != c)
        i--;
    if (s[i] == c)
        return ((char*)&s[i]);
    return (NULL);
}