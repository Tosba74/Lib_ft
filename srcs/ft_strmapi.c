/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:16:08 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/08 17:50:36 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t  ft_strlen(const char *s)
{
    size_t   i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char	ft_rot13(unsigned int i, char c)
{
	if (c >= 'a' && c<= 'm')
		c += i; 
	if (c >= 'n' && c<= 'z')
		c -= i; 
	write(1, &c, 1);
	return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}


#include <stdio.h>
int		main(int ac, char **av)
{
	if(ac > 1)
	{
		char (*f)(unsigned int, char);

		f = &ft_rot13;
		printf("%s\n", ft_strmapi(av[1], f(13, *av[1])));
	}
	return(0);

}