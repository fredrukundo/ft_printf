/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:16:53 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/16 18:17:57 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer_address(size_t x, char *base)
{
	char	string[25];
	int		i;
	int		len;
	int		temp;

	i = 0;
	len = 0;
	while (x != 0)
	{
		string[i++] = base[x % 16];
		x = x / 16;
	}
	while (i--)
	{
		temp = ft_putchar_fd(string[i], 1);
		if (temp < 0)
			return (-1);
		len += temp;
	}
	return (len);
}

int	ft_pointer(size_t x)
{
	int		len;
	int		result;

	if (write(1, "0x", 2) < 0)
		return (-1);
	len = 2;
	if (x == 0)
	{
		if (write(1, "0", 1) < 0)
			return (-1);
		len++;
	}
	else
	{
		result = print_pointer_address(x, "0123456789abcdef");
		if (result < 0)
			return (-1);
		len += result;
	}
	return (len);
}
