/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:59:41 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 17:15:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int 	ft_check_char(char s, char c)
{	
	if (s == c)
		return (1);
	else
		return (0);
}

size_t	ft_len_words(char const *s, char c, int pos)
{
	size_t	i;

	i = 0;
	while (s[pos + i] && ft_check_char(s[pos + i], c) != 1)
    {
    	i++;
	}
	return (i + 1); 
}

int		ft_nb_words(char const *s, char c)
{
	int	i;
	int nb;

	i = 0;
	nb = 1;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || ft_check_char(s[i + 1], c) != 0)
		&& ft_check_char(s[i], c) == 0)
			nb++; 
		i++;
	}
	return (nb);
}

#include <stdio.h>
char    **ft_split(char const *s, char c)
	{
	size_t	i;
	int 	t;
	int		x;
	char	**tab;

	i = 0;
	t = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * ft_nb_words(s, c))))
		return (NULL);
	while (t != ft_nb_words(s, c))
	{
		while (ft_check_char(s[i], c) == 1)
			i++;
		if (ft_check_char(s[i], c) == 0)
		{
			if (!(tab[t] = (char*)malloc(sizeof(char) * ft_len_words(s, i, c))))
				return (NULL);
			x = 0;
            while (s[i] && ft_check_char(s[i], c) != 1)
				tab[t][x++] = s[i++];
            tab[t][x] = '\0'; 
		}
		t++;
	}
	return (tab);
}



void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_printtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_printtab(ft_split(av[1], 't'));
	return (0);
}