/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:33:58 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/01 08:43:30 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', count);
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar(nb % 10 + 48, count);
}

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n > 9)
		ft_putnbr_u(n / 10, count);
	ft_putchar(n % 10 + 48, count);
}
