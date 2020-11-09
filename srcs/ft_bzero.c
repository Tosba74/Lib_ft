/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:45:38 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 22:52:39 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>


size_t  ft_strlen(const char *s)
{
    size_t   i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void   *ft_memset(void *b, int c, size_t len)
{
    char    *s;
    size_t  i;

    s = (char*)b;
    i = 0;
    while (i < len)
    {
        s[i] = (char)c;
        i++; 
    }
    return ((void*)s);
}

void    ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	len;

	str = (char*)s;
	len = ft_strlen(str);
	if (n == 0)
		return ;
	ft_memset((void*)str, 48, len);
}


int		main()
{
	char	*moi = "123456789";
	char	*ref = "123456789";
	ft_bzero((void*)moi, 5);
	bzero((void*)ref, 5);
	printf("%s\n", (char*)moi);
	printf("%s\n", (char*)ref);
	return (0);
}