/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:41:58 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 14:06:52 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char 	*str1;
	const char 	*str2;

	i = 0;
	str1 = (const char*)s1;
	str2 = (const char *)s2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i >= n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		const void *s1 = (const void *) av[1];
		const void *s2 = (const void *) av[2];
		printf("%d\n", ft_memcmp(s1, s2, 5));
		printf("%d\n", memcmp(s1, s2, 5));
	}
	return (0);
}
