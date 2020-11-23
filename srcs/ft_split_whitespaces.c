/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:03:51 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 12:10:33 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int 	ft_checkchar(char s)
{	
	if (s == ' ' || (s >= 9 && s <= 13))
		return (1);
	else
		return (0);
}

size_t	ft_lenwords(char const *s, int pos)
{
	size_t	i;

	i = 0;
	while (s[pos + i] && ft_checkchar(s[pos + i]) != 1)
    	i++;
	return (i + 1); 
}

int		ft_nbwords(char const *s)
{
	int	i;
	int nb;

	i = 0;
	nb = 1;
	if (s == NULL)
		return (i);
	while (s[i])
	{
		if ((s[i + 1] == '\0' || ft_checkchar(s[i + 1]) != 0)
		&& ft_checkchar(s[i]) == 0)
			nb++; 
		i++;
	}
	return (nb);
}

char    **ft_split_whitespaces(char const *s)
	{
	size_t	i;
	int 	t;
	int		x;
	char	**tab;

	i = 0;
	t = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * ft_nbwords(s))))
		return (NULL);
	while (t != ft_nbwords(s))
	{
		while (ft_checkchar(s[i]) == 1)
			i++;
		if (ft_checkchar(s[i]) == 0)
		{
			if (!(tab[t] = (char*)malloc(sizeof(char) * ft_lenwords(s, i))))
				return (NULL);
			x = 0;
            while (s[i] && ft_checkchar(s[i]) != 1)
				tab[t][x++] = s[i++];
			tab[t][x] = '\0'; 
		}
		t++;
	}
	return (tab);
}