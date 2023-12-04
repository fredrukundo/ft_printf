/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:31:09 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/01 10:01:10 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, char *base, int *count)
{
	if (nb > 15)
		ft_puthex(nb / 16, base, count);
	ft_putchar(base[nb % 16], count);
}
