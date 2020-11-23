/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:39:37 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 03:52:40 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s && *s != c)
        s++;
    if (*s == c)
        return ((char*)&(*s));
    return (NULL);
}