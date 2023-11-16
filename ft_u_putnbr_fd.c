/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:44:00 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/16 10:10:42 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_u_int_len(unsigned int a)
{
	int	len;

	len = 1;
	while (a > 9)
	{
		len++;
		a /= 10;
	}
	return (len);
}

int	ft_u_putnbr_fd(unsigned int n, int fd)
{
	int	len;

	len = ft_u_int_len(n);
	if (n >= 10)
	{
		if (ft_putnbr_fd(n / 10, fd) < 0)
			return (-1);
	}
	if (ft_putchar_fd(n % 10 + '0', fd) < 0)
		return (-1);
	return (len);
}
