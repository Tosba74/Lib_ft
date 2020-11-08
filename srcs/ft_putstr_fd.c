/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:44:01 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/05 03:01:47 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int     i;

    i = 0;
	while (s[i])
    {
		ft_putchar_fd(s[i], fd);
        i++;
    }
}
