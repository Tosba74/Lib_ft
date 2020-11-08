/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:31:30 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/05 13:15:15 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_len_num(int n)
{
	int		count;

	count = 1;
	if (n < 0)
    {
		n = -n;
        count++;
    }
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count); 
}

char    *ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*result;

	nb = n; 
	i = ft_len_num(n);
	if (!(result = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	if (nb < 0)
    {
		result[0] = '-';
        nb = -nb;
    }
	result[i] = '\0';
	while (nb > 0)
	{
		i--;
		result[i] = nb % 10 + '0';
		nb /= 10;
	}
	return (result);
}
