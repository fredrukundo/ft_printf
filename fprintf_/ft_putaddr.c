/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:24:10 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/01 10:12:22 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex_addr(unsigned long long n, char *base, int *count)
{
	if (n > 15)
		ft_puthex_addr(n / 16, base, count);
	ft_putchar(base[n % 16], count);
}

void	ft_putaddr(unsigned long long n, int *count)
{
	ft_putstr("0x", count);
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	ft_puthex_addr(n, SYMBOLS_HEX_LOWER, count);
}
