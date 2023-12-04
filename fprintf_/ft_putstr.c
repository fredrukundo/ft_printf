/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:48:40 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/01 08:38:59 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	if (!str)
	{
		*count += write(1, "(null)", 6);
	}
	else
	{
		while (*str)
		{
			ft_putchar(*str, count);
			str++;
		}
	}
}
