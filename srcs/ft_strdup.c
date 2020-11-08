/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:59:38 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/04 22:39:59 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t  ft_strlen(const char *s);

char    *ft_strcpy(char *dst, const char *src);

char    *ft_strdup(const char *s1)
{
    char    *dst;

    if (!(dst = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    ft_strcpy(dst, s1);
    return (dst);
}
