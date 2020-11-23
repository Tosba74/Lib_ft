/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 01:07:10 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_len_numb(int n, int b)
{
	int		count;

	count = 0;
    if (n < 0)
    {
        n = -n;
        count++;
    }
    while (n > 0 && b >= 1)
    {
        n /= b;
        count++;
    }
    return (count);
}

void    ft_recursive_itoa(long nb, int i, char *base, char *result)
{
	int b;

	b = ft_check_base(base);
    result[i] = (char)base[nb % b];
    if (nb >= b)
        ft_recursive_itoa(nb / b, i - 1, base, result);
}

char	*ft_itoa_base(int n, char *base)
{
	int		b;
	int		i;
	long	nb;
	char	*result;

	b = ft_check_base(base); 
	i = ft_len_numb(n, b);
	nb = n;
	if (!(result = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	if (b == 0 || b == 1)
		return (0);
	result[i] = '\0';
	if (nb < 0)
    {
		result[0] = '-';
        nb = -nb;
    }
    i--;
	ft_recursive_itoa(nb, i, base, result);
	return (result);
}