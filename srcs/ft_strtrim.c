/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:24:22 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 02:17:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_check_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return(0);
}

int		ft_len_word(char const *s, char const *set)
{
	int		i;
	int		len;

	i = 0;
	len = 1;
	while (ft_check_set(s[i], set) == 1)
		i++;
	while (s[i++])
		len++;
	while (s[i] == '\0' || ft_check_set(s[i], set) == 1)
	{
		len--;
		i--;
	}
	return (len + 1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	if (set[0] == '\0')
		return (0);
	if (!(s = (char*)malloc(sizeof(char) * ft_len_word(s1, set))))
		return (NULL);
	while (ft_check_set(s1[i], set) == 1)
		i++;
	while (j < ft_len_word(s1, set))
		s[j++] = s1[i++];
	return (s);
}