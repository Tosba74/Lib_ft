/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:03:51 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 17:15:18 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int 	ft_check_char(char s)
{	
	if (s == ' ' || (s >= 9 && s <= 13))
		return (1);
	else
		return (0);
}

size_t	ft_len_words(char const *s, int pos)
{
	size_t	i;

	i = 0;
	while (s[pos + i] && ft_check_char(s[pos + i]) != 1)
    {
    	i++;
	}
	return (i + 1); 
}

int		ft_nb_words(char const *s)
{
	int	i;
	int nb;

	i = 0;
	nb = 1;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || ft_check_char(s[i + 1]) != 0)
		&& ft_check_char(s[i]) == 0)
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
	if (!(tab = (char**)malloc(sizeof(char*) * ft_nb_words(s))))
		return (NULL);
	while (t != ft_nb_words(s))
	{
		while (ft_check_char(s[i]) == 1)
			i++;
		if (ft_check_char(s[i]) == 0)
		{
			if (!(tab[t] = (char*)malloc(sizeof(char) * ft_len_words(s, i))))
				return (NULL);
			x = 0;
            while (s[i] && ft_check_char(s[i]) != 1)
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
		ft_printtab(ft_split_whitespaces(av[1]));
	return (0);
}