/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:48:07 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 01:07:44 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_isneg(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int		ft_find_index(char c, const char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int     ft_atoi_base(const char *str, const char *base)
{
    int     num;
    int     neg;
	int		b;
    
    num = 0;
    neg = 1;
	b = ft_check_base(base);
    if (b == 0 || b == 1)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+' || *str == '-')
    {
        neg = ft_isneg(*str);
        str++;
    }
    while (*str && ft_find_index(*str, base) >= 0)
    {
        num *= b;
        num += ft_find_index(*str, base);
        str++;
    }
   return (num * neg);
}
