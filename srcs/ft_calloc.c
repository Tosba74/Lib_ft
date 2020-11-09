/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:45:13 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 13:28:15 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
		str[i++] = '0';
	printf("%s\n", str);
}

void    *ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(dst = (void*)malloc(sizeof(void) * (count * size))))
		return (NULL);
	while (dst)
		ft_bzero(dst, count * size);
	return (dst);
}

int main()
{
	ft_calloc (3, 2);
	return (0);
}