/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:58:11 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/05 01:50:46 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_atoi(const char *str)
{
    int     num;
    int     neg;
    
    num = 0;
    neg = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            neg = -neg;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num *= 10;
        num += *str - '0';
        str++;
    }
    return (num * neg);
}
