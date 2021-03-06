/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/05 15:49:21 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_recursive_itoa(long nb, int i, const char *base, char *result)
{
	int b;

	b = ft_check_base(base);
	result[i] = (char)base[nb % b];
	if (nb >= b)
		ft_recursive_itoa(nb / b, i - 1, base, result);
}

int		ft_itoa_base_len(char *result, int n, const char *base)
{
	int		b;
	int		len;
	long	nb;

	b = ft_check_base(base);
	len = ft_len_itoa(n, b);
	nb = (long)n;
	if (!(result = (char*)malloc(sizeof(char) * len)))
		return (0);
	if (b == 0 || b == 1)
		return (0);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[len] = '\0';
	ft_recursive_itoa(nb, len - 1, base, result);
	return (ft_len_num(n, 10));
}
