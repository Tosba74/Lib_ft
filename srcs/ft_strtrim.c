/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:24:22 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/22 22:09:07 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return(0);
}

int		ft_len_word(char const *s, char const *set)
{
	int		i;
	int		size;
	int		len;

	i = 0;
	size = ft_strlen(s);
	len = 0;
	while (s[i] && ft_check_set(s[i], set) != 0)
		i++;
	while (ft_check_set(s[size], set) != 0)
		size--;
	if (size <= i)
		len = 0;
	len = size - i;
	return (len);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*s;

	i = 0;
	j = 0;
	len = ft_len_word(s1, set);
	if (s1 == NULL)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i] && ft_check_set(s1[i], set) != 0)
			i++;
	while (j <= len)
		s[j++] = s1[i++];
	s[j] = '\0';
	return (s);
}