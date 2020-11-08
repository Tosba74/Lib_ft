/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:30:31 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/06 12:32:04 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_check_base(const char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
    	if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return(i);
}

void    ft_putnbr_base(int n, char *base)
{
	long	nb;
	int		b;

	nb = n;
	b = ft_check_base(base);
	if (b == 0 || b == 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= b)
		ft_putnbr_base(nb / b, base);
	ft_putchar(base[nb % b]);
}